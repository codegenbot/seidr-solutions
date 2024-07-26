map<char, int> histogram(string test) {
    map<char, int> hist;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            hist[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : hist) {
        maxCount = max(maxCount, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : hist) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}