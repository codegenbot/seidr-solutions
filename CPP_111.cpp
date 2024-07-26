map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string token;
    
    while (ss >> token) {
        for (char& c : token) {
            if (islower(c)) {
                result[c]++;
            }
        }
    }
    
    map<char, int> max_occurrences;
    int max_count = 0;
    for (const auto& pair : result) {
        if (pair.second > max_count) {
            max_count = pair.second;
            max_occurrences.clear();
            max_occurrences.insert(pair);
        } else if (pair.second == max_count) {
            max_occurrences.insert(pair);
        }
    }
    
    return max_occurrences;
}