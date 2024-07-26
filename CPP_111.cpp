map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    
    map<char, int> mostRepeatedChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            mostRepeatedChars[pair.first] = pair.second;
        }
    }
    
    return mostRepeatedChars;
}