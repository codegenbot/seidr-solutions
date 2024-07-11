bool issame(const string& word) {
    for (size_t i = 1; i < word.length(); ++i) {
        if (word[i] != word[0]) {
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
        if (issame(word)) {
            for (char c : word) {
                result[c]++;
            }
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