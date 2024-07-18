map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char c : token) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> output;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            output[pair.first] = pair.second;
        }
    }
    return output;
}