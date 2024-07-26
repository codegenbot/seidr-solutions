map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> counts;

    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    int maxCount = 0;
    for (const auto &entry : counts) {
        maxCount = max(maxCount, entry.second);
    }

    for (const auto &entry : counts) {
        if (entry.second == maxCount) {
            result.insert(entry);
        }
    }

    return result;
}