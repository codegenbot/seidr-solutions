map<char, int> result;
    istringstream iss(test);
    string token;
    while (iss >> token) {
        for (char c : token) {
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