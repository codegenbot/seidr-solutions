map<char, int> histogram(string test) {
    map<char, int> freq_map;
    for (char& c : test) {
        if (c != ' ') {
            freq_map[c]++;
        }
    }

    map<char, int> result;
    int max_occurrence = 0;
    for (const auto& pair : freq_map) {
        if (pair.second > max_occurrence) {
            result.clear();
            max_occurrence = pair.second;
        }
        if (pair.second == max_occurrence) {
            result.insert(pair);
        }
    }

    return result;
}