map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string token;
    
    while (ss >> token) {
        for (char c : token) {
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    
    map<char, int> mostRepeated;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeated[entry.first] = entry.second;
        }
    }
    
    return mostRepeated;
}