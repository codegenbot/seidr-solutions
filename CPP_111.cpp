map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> freq;
    int maxFreq = 0;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
            maxFreq = max(maxFreq, freq[c]);
        }
    }
    for (auto it : freq) {
        if (it.second == maxFreq) {
            result[it.first] = it.second;
        }
    }
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}