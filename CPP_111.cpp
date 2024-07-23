map<char, int> histogram(string test){
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    map<char, int> maxChars;
    int maxCount = 0;
    for (const auto& pair : result) {
        if (pair.second > maxCount) {
            maxChars.clear();
            maxChars[pair.first] = pair.second;
            maxCount = pair.second;
        } else if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }
    
    return maxChars;
}