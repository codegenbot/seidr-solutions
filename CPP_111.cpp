map<char, int> histogram(string test) {
    map<char, int> counts;
    string word;
    for (char& c : test) {
        if (c != ' ') {
            word += c;
        } else {
            for (char& letter : word) {
                counts[letter]++;
            }
            word = "";
        }
    }
    if (!word.empty()) {
        for (char& letter : word) {
            counts[letter]++;
        }
    }
    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : counts) {
        if (pair.second >= maxCount) {
            maxCount = pair.second;
            result[pair.first] = pair.second;
        }
    }
    return result;
}