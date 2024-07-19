map<char, int> hist;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char& c : token) {
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