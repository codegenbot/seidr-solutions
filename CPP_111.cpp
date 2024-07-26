map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> freq;
    
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    
    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }
    
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}