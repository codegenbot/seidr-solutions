map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> maxCountLetters;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxCountLetters[pair.first] = pair.second;
        }
    }
    return maxCountLetters;
}