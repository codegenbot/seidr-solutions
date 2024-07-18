map<char, int> result;
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }
    
    int max_count = 0;
    for (const auto& pair : result) {
        if (pair.second > max_count) {
            max_count = pair.second;
        }
    }
    
    map<char, int> max_occurrences;
    for (const auto& pair : result) {
        if (pair.second == max_count) {
            max_occurrences[pair.first] = pair.second;
        }
    }
    
    return max_occurrences;