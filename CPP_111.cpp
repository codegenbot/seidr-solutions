map<char, int> histogram(string test) {
    map<char, int> result;
    int maxCount = 0;
    
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
            maxCount = max(maxCount, result[c]);
        }
    }
    
    map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }

    return maxChars;
}