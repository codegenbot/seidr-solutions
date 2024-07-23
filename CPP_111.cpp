map<char, int> result;
    int maxCount = 0;
    
    for (char c : test) {
        if (isalpha(c)) {
            result[c]++;
            maxCount = max(maxCount, result[c]);
        }
    }
    
    map<char, int> maxCountLetters;
    for (auto& pair : result) {
        if (pair.second == maxCount) {
            maxCountLetters[pair.first] = pair.second;
        }
    }
    
    return maxCountLetters;
}