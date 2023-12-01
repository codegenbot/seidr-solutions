map<char, int> histogram(string test) {
    map<char, int> freqMap;
    string word;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            word += test[i];
        } else {
            freqMap[word]++;
            word = "";
        }
    }
    if (!word.empty()) {
        freqMap[word]++;
    }
    return freqMap;
}