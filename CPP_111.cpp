map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string::size_type pos = 0;
    while (pos < test.length()) {
        if (test[pos] != ' ') {
            result[test[pos]]++;
        }
        pos++;
    }
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }
    map<char, int> finalResult;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            finalResult.insert(*it);
        }
    }
    return finalResult;
}