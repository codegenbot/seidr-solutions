map<char, int> hist;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            hist[c]++;
        }
    }
    int max_count = 0;
    for (const auto &pair : hist) {
        max_count = max(max_count, pair.second);
    }
    map<char, int> result;
    for (const auto &pair : hist) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}