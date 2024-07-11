map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : count) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }

    for (const auto& pair : count) {
        if (pair.second == maxCount) {
            result.insert(pair);
        }
    }

    return result;
}