map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int max_occurrence = 0;
    for (const auto& entry : result) {
        max_occurrence = max(max_occurrence, entry.second);
    }
    map<char, int> max_occurrences;
    for (const auto& entry : result) {
        if (entry.second == max_occurrence) {
            max_occurrences[entry.first] = entry.second;
        }
    }
    return max_occurrences;
}