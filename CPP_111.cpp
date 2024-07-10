map<char, int> result;
    map<char, int> counts;
    int maxCount = 0;
    
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
            maxCount = max(maxCount, counts[c]);
        }
    }
    
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}