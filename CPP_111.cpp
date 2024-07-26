map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (islower(c)) {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : count) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}