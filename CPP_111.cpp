map<char, int> histogram(string test) {
    map<char, int> freq;
    string word = "";
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                for (char ch : word) {
                    freq[ch]++;
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        for (char ch : word) {
            freq[ch]++;
        }
    }

    int maxFreq = 0;
    for (const auto &entry : freq) {
        maxFreq = max(maxFreq, entry.second);
    }

    map<char, int> result;
    for (const auto &entry : freq) {
        if (entry.second == maxFreq) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}