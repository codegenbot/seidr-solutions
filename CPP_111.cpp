map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    map<char, int> result;
    int max_freq = 0;
    for (const auto& pair : freq) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == max_freq) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}