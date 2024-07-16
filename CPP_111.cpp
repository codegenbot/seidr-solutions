map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    map<char, int> result;
    int maxFreq = 0;
    for (const auto &p : freq) {
        maxFreq = max(maxFreq, p.second);
    }

    for (const auto &p : freq) {
        if (p.second == maxFreq) {
            result[p.first] = p.second;
        }
    }

    return result;
}