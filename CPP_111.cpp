map<char, int> histogram(string test) {
    map<char, int> letterCount;
    for (char c : test) {
        if (c != ' ') {
            letterCount[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : letterCount) {
        maxCount = max(maxCount, pair.second);
    }
    
    map<char, int> result;
    for (const auto& pair : letterCount) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}