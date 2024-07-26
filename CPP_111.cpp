map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char letter : word) {
            result[letter]++;
        }
    }
    int maxCount = 0;
    for (auto it : result) {
        maxCount = max(maxCount, it.second);
    }
    map<char, int> resultMap;
    for (auto it : result) {
        if (it.second == maxCount) {
            resultMap[it.first] = it.second;
        }
    }
    return resultMap;
}