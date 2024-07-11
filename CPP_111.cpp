map<char, int> histogram(string test){
    map<char, int> result;
    
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char &c : word) {
            if (islower(c)) {
                result[c]++;
            }
        }
    }
    
    int maxCount = 0;
    for (const auto &pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }
    
    map<char, int> mostRepeated;
    for (const auto &pair : result) {
        if (pair.second == maxCount) {
            mostRepeated[pair.first] = pair.second;
        }
    }
    
    return mostRepeated;
}