map<char, int> histogram(string test){
    map<char, int> charCount;
    
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char& c : token) {
            charCount[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : charCount) {
        maxCount = max(maxCount, pair.second);
    }
    
    map<char, int> result;
    for (const auto& pair : charCount) {
        if (pair.second == maxCount) {
            result.insert(pair);
        }
    }
    
    return result;
}