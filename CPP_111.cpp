map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    map<char, int> count;
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }
    int maxCount = 0;
    for (auto it = count.begin(); it != count.end(); ++it) {
        maxCount = max(maxCount, it->second);
    }
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}