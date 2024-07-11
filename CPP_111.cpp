map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> frequency;
    
    for (char c : test) {
        if (c != ' ') {
            frequency[c]++;
        }
    }
    
    int maxFrequency = 0;
    for (const auto& pair : frequency) {
        maxFrequency = max(maxFrequency, pair.second);
    }
    
    for (const auto& pair : frequency) {
        if (pair.second == maxFrequency) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}