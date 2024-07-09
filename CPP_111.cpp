map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = test;
    for (char c : str) {
        if (result.find(c) == result.end())
            result[c] = 1;
        else
            result[c]++;
    }

    int maxCount = 0;
    vector<pair<char, int>> maxLetters;
    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxLetters.clear();
            maxLetters.push_back(p);
        } else if (p.second == maxCount)
            maxLetters.push_back(p);
    }

    map<char, int> finalResult;
    for (auto& p : maxLetters)
        finalResult[p.first] = p.second;

    return finalResult;
}