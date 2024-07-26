map<char, int> result;
    string word = "";
    for (char c : test) {
        if (c != ' ') {
            word += c;
        } else {
            for (char w : word) {
                result[w]++;
            }
            word = "";
        }
    }
    for (char w : word) {
        result[w]++;
    }
    int maxCount = 0;
    for (auto it : result) {
        maxCount = max(maxCount, it.second);
    }
    map<char, int> maxResult;
    for (auto it : result) {
        if (it.second == maxCount) {
            maxResult[it.first] = it.second;
        }
    }
    return maxResult;