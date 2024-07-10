map<char, int> histogram(string test) {
    map<char, int> result;
    string str = test;
    for (char c : str) {
        if (c != ' ') {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
        }
    }
    map<char, int> maxMap;
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            maxMap = {{it->first, it->second}};
        } else if (it->second == maxCount) {
            maxMap[make_pair(it->first, it->second)] = it->second;
        }
    }
    return maxMap;
}