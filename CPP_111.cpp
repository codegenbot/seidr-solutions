map<char, int> histogram(string test) {
    map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    map<char, int> result;
    int max_count = 0;
    for (const auto& entry : counts) {
        if (entry.second >= max_count) {
            max_count = entry.second;
            result[entry.first] = entry.second;
        }
    }

    return result;
}