map<char, int> histogram(string test){
    map<char, int> counts;
    string word;
    for (int i = 0; i < test.size(); ++i) {
        if (test[i] == ' ') {
            if (!word.empty()) {
                for (char c : word) {
                    counts[c]++;
                }
                word.clear();
            }
        } else {
            word += test[i];
        }
    }
    if (!word.empty()) {
        for (char c : word) {
            counts[c]++;
        }
    }

    map<char, int> result;
    int maxCount = 0;
    for (const auto &pair : counts) {
        if (pair.second > maxCount) {
            result.clear();
            result[pair.first] = pair.second;
            maxCount = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}