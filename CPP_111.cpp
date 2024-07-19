map<char, int> result;
    map<char, int> occurrences;
    
    for (char c : test) {
        if (c != ' ') {
            occurrences[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& entry : occurrences) {
        maxCount = max(maxCount, entry.second);
    }
    
    for (const auto& entry : occurrences) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}