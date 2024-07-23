map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    
    int max_occurrence = 0;
    for (const auto& pair : result) {
        max_occurrence = max(max_occurrence, pair.second);
    }
    
    map<char, int> max_occurrences;
    for (const auto& pair : result) {
        if (pair.second == max_occurrence) {
            max_occurrences[pair.first] = max_occurrence;
        }
    }
    
    return max_occurrences;
}