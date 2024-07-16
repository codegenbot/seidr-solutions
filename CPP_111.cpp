map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int max_count = 0;
    for (const auto& entry : freq) {
        max_count = max(max_count, entry.second);
    }

    map<char, int> result;
    for (const auto& entry : freq) {
        if (entry.second == max_count) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}