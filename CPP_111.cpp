map<char, int> result;
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto &pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> maxLetters;
    for (const auto &pair : result) {
        if (pair.second == maxCount) {
            maxLetters[pair.first] = pair.second;
        }
    }
    return maxLetters;
}