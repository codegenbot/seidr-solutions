map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> freq;
    
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    
    int maxFreq = 0;
    for (auto const& p : freq) {
        maxFreq = max(maxFreq, p.second);
    }
    
    for (auto const& p : freq) {
        if (p.second == maxFreq) {
            result[p.first] = p.second;
        }
    }
    
    return result;
}