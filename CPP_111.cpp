map<char, int> histogram(string test) {
    map<char, int> freqMap;
    string word;
    for (char c : test) {
        if (c != ' ') {
            word += c;
        } else {
            for (char letter : word) {
                freqMap[letter]++;
            }
            word = "";
        }
    }
    for (char letter : word) {
        freqMap[letter]++;
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