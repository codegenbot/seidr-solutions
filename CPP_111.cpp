map<char, int> result;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char letter : token) {
            result[letter]++;
        }
    }
    int maxCount = 0;
    for (const auto &entry : result) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }
    map<char, int> output;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            output[entry.first] = maxCount;
        }
    }
    return output;
}