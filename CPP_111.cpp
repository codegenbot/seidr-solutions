map<char, int> histogram(string test) {
    map<char, int> hist;
    for (char c : test) {
        if (c != ' ') {
            hist[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& p : hist) {
        maxCount = max(maxCount, p.second);
    }
    map<char, int> result;
    for (const auto& p : hist) {
        if (p.second == maxCount) {
            result[p.first] = p.second;
        }
    }
    return result;
}