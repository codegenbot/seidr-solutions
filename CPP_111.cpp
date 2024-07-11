map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            freq[c]++;
        }
    }
    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }
    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}