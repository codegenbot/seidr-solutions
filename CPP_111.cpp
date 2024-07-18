map<char, int> histogram(string test) {
    map<char, int> count;
    for (char c : test) {
        if (c == ' ') continue;
        count[c]++;
    }
    
    map<char, int> result;
    int maxFreq = 0;
    for (const auto& pair : count) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            result.clear();
        }
        if (pair.second == maxFreq) {
            result.insert(pair);
        }
    }
    
    return result;
}