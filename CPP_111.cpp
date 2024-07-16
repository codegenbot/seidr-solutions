map<char, int> hist;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char& c : word) {
            hist[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : hist) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }
    map<char, int> result;
    for (const auto& entry : hist) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }
    return result;