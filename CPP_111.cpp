map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int max_count = 0;
    for (const auto& pair : result) {
        max_count = max(max_count, pair.second);
    }
    map<char, int> max_occurrences;
    for (const auto& pair : result) {
        if (pair.second == max_count) {
            max_occurrences[pair.first] = pair.second;
        }
    }
    return max_occurrences;
}