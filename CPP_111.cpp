map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int max_occurrence = 0;
    for (const auto& p : result) {
        if (p.second > max_occurrence) {
            max_occurrence = p.second;
        }
    }
    map<char, int> max_occurrences;
    for (const auto& p : result) {
        if (p.second == max_occurrence) {
            max_occurrences[p.first] = p.second;
        }
    }
    return max_occurrences;