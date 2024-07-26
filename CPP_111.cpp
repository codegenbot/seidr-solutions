map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        maxCount = max(maxCount, it->second);
    }
    map<char, int> ans;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            ans[it->first] = it->second;
        }
    }
    return ans;
}