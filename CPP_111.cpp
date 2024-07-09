map<char, int> histogram(string test) {
    map<char, int> result;
    string letters[test.size()];
    int count = 0;

    for (int i = 0; i < test.size(); i++) {
        if (test[i] != ' ') {
            if (i > 0 && test[i - 1] == ' ') {
                count++;
            }
            letters[count][letters[count].size() - 1] = test[i];
            letters[count]++;
        } else {
            if (count > 0) {
                result[letters[count - 1]] = count;
                count = 0;
            }
        }
    }

    if (count > 0) {
        result[letters[count - 1]] = count;
    }

    map<char, int> maxCountMap;

    for (auto& pair : result) {
        if (maxCountMap.empty() || pair.second >= maxCountMap.rbegin()->second) {
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCountMap.rbegin()->second) {
            maxCountMap[pair.first] = pair.second;
        }
    }

    return maxCountMap;
}