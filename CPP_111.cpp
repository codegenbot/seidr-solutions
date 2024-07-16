map<char, int> result;
    map<char, int> charCount;
    int maxCount = 0;

    for (char c : test) {
        if (c == ' ') continue;
        charCount[c]++;
        maxCount = max(maxCount, charCount[c]);
    }

    for (const auto& pair : charCount) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}