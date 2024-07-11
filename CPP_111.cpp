bool issame(const map<char, int>& map1, const map<char, int>& map2) {
    if (map1.size() != map2.size()) {
        return false;
    }
    
    for (const auto& entry : map1) {
        if (map2.find(entry.first) == map2.end() || map2.at(entry.first) != entry.second) {
            return false;
        }
    }
    
    return true;
}

map<char, int> histogram(string test);
map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    
    map<char, int> mostRepeatedChars;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeatedChars[entry.first] = entry.second;
        }
    }
    
    return mostRepeatedChars;
}