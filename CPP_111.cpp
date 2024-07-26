map<char, int> count;
    for (char c : test) {
        if (isalpha(c)) {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (auto& pair : count) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }

    map<char, int> result;
    for (auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}