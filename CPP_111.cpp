map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string token;
    map<char, int> occurrences;

    while (ss >> token) {
        for (char c : token) {
            occurrences[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : occurrences) {
        maxCount = max(maxCount, pair.second);
    }

    for (const auto& pair : occurrences) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}