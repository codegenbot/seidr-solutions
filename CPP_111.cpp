map<char, int> histogram(string test){
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
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }
    map<char, int> maxLetters;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxLetters[pair.first] = pair.second;
        }
    }
    return maxLetters;
}