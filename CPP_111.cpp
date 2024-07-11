map<char, int> result;
    map<char, int> count;
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }
    int max_count = 0;
    for (const auto& pair : count) {
        max_count = max(max_count, pair.second);
    }
    for (const auto& pair : count) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}