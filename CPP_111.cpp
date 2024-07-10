map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    size_t count = 0;
    char prevChar = '\0';
    for (char c : test) {
        if (c == ' ') continue;
        if (c == prevChar) {
            ++count;
        } else {
            if (prevChar != '\0') {
                result[prevChar] = count;
            }
            prevChar = c;
            count = 1;
        }
    }

    if (prevChar != '\0') {
        result[prevChar] = count;
    }

    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) maxCount = pair.second;
    }

    map<char, int> maxResult;
    for (auto& pair : result) {
        if (pair.second == maxCount) {
            maxResult[pair.first] = pair.second;
        }
    }

    return maxResult;
}