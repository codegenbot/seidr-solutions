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
    for (auto it : result) {
        maxCount = max(maxCount, it.second);
    }
    
    map<char, int> maxLetters;
    for (auto it : result) {
        if (it.second == maxCount) {
            maxLetters[it.first] = it.second;
        }
    }
    
    return maxLetters;
}