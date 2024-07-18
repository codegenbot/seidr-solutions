map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& p : result) {
        maxCount = max(maxCount, p.second);
    }
    map<char, int> res;
    for (const auto& p : result) {
        if (p.second == maxCount) {
            res[p.first] = p.second;
        }
    }
    return res;
}