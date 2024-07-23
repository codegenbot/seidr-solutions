map<char,int> histogram(string test){
    map<char,int> counts;
    string word = "";
    for (char c : test) {
        if (c != ' ') {
            word += c;
        } else {
            for (char w : word) {
                counts[w]++;
            }
            word = "";
        }
    }
    for (char w : word) {
        counts[w]++;
    }
    int max_count = 0;
    for (const auto& pair : counts) {
        max_count = max(max_count, pair.second);
    }
    map<char,int> result;
    for (const auto& pair : counts) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}