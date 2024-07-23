map<char, int> result;
    map<char, int> count;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            count[c]++;
        }
    }
    int maxCount = 0;
    for (auto& pair : count) {
        maxCount = max(maxCount, pair.second);
    }
    for (auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}