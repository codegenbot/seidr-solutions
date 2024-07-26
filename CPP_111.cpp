map<char, int> hist;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            hist[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : hist) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> result;
    for (const auto& entry : hist) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }
    return result;
}