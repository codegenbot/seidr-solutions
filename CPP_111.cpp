map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        maxCount = max(maxCount, it->second);
    }
    map<char, int> maxChars;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            maxChars[it->first] = it->second;
        }
    }
    return maxChars;
}