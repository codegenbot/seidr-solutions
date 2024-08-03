map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string temp = "";
    for (char c : test) {
        if (c != ' ') {
            temp += c;
        } else {
            char lastChar = temp.back();
            result[lastChar]++;
            temp.clear();
        }
    }

    if (!temp.empty()) {
        char lastChar = temp.back();
        result[lastChar]++;
    }

    map<char, int> maxMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxMap.clear();
            maxMap[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            maxMap[pair.first] = pair.second;
        }
    }

    return maxMap;
}