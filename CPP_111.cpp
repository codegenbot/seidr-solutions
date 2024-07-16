map<char, int> result;
    map<char, int> count;
    int maxCount = 0;
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            maxCount = max(maxCount, count[c]);
        }
    }
    for (const auto &elem : count) {
        if (elem.second == maxCount) {
            result[elem.first] = elem.second;
        }
    }
    return result;
}