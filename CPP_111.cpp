bool issame(map<char, int> a, map<char, int> b) {
    map<char, int> result;
    
    for (const auto &pair : a) {
        result[pair.first] = pair.second;
    }
    
    for (const auto &pair : b) {
        result[pair.first] += pair.second;
    }
    
    return result == b;
}

map<char, int> histogram(const string& test) {
    map<char, int> result;
    map<char, int> count;
    
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto &pair : count) {
        maxCount = max(maxCount, pair.second);
    }
    
    for (const auto &pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}