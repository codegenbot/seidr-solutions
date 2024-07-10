map<char, int> histogram(string test){
    map<char, int> result;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char c : token) {
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }
    
    map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }
    
    return maxChars;
}