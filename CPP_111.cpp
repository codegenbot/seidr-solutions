std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> freq;
    int maxFreq = 0;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
            maxFreq = std::max(maxFreq, freq[c]);
        }
    }
    for (auto it : freq) {
        if (it.second == maxFreq) {
            result[it.first] = it.second;
        }
    }
    return result;
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    // function implementation
}
```