map<char, int> result;
    map<char, int> charCount;
    int maxCount = 0;

    for (char c : test) {
        if (c != ' ') {
            charCount[c]++;
            maxCount = max(maxCount, charCount[c]);
        }
    }

    for (auto it = charCount.begin(); it != charCount.end(); ++it) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }

    return result;
}