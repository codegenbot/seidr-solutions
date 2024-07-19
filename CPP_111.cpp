map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string item;
    
    while (ss >> item) {
        for (char c : item) {
            result[c]++;
        }
    }
    
    int max_count = 0;
    for (const auto& p : result) {
        max_count = max(max_count, p.second);
    }
    
    map<char, int> max_occurrences;
    for (const auto& p : result) {
        if (p.second == max_count) {
            max_occurrences[p.first] = p.second;
        }
    }
    
    return max_occurrences;
}