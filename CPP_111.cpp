map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> freq;
    int maxFreq = 0;

    for (char c : test) {
        if (c == ' ') continue;
        freq[c]++;
        maxFreq = max(maxFreq, freq[c]);
    }

    for (const auto &entry : freq) {
        if (entry.second == maxFreq) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}