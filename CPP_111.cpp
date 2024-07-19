map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;

    while (iss >> word) {
        for (const char& c : word) {
            result[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& p : result) {
        maxCount = max(maxCount, p.second);
    }

    map<char, int> maxChars;
    for (const auto& p : result) {
        if (p.second == maxCount) {
            maxChars[p.first] = p.second;
        }
    }

    return maxChars;
}