map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int maxFreq = 0;
    for (const auto& entry : freq) {
        maxFreq = max(maxFreq, entry.second);
    }

    map<char, int> result;
    for (const auto& entry : freq) {
        if (entry.second == maxFreq) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}