map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> frequency;
    
    for (char c : test) {
        if (c != ' ') {
            frequency[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : frequency) {
        maxCount = max(maxCount, pair.second);
    }
    
    for (const auto& pair : frequency) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}