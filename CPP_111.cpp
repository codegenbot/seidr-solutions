map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string temp = "";
    for (char c : test) {
        if (c == ' ') {
            if (!temp.empty()) {
                ++result[temp[0]];
                temp.clear();
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        ++result[temp[0]];
    }

    map<char, int> maxCountMap;
    int maxCount = 0;

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCountMap.clear();
            maxCountMap[it->first] = it->second;
            maxCount = it->second;
        } else if (it->second == maxCount) {
            maxCountMap[it->first] = it->second;
        }
    }

    return maxCountMap;
}