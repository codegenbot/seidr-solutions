map<char, int> histogram(string test) {
    map<char, int> freqMap;
    string word;
    stringstream ss(test);
    while (ss >> word) {
        for (char c : word) {
            freqMap[c]++;
        }
    }

    int maxFreq = 0;
    for (const auto& pair : freqMap) {
        maxFreq = max(maxFreq, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : freqMap) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}