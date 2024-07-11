map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char letter : word) {
            result[letter]++;
        }
    }
    int maxCount = 0;
    for (const auto &entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxLetters;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            maxLetters[entry.first] = entry.second;
        }
    }
    return maxLetters;
}