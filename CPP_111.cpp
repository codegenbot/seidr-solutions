map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;
    
    string word;
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                ++result[word[0]];
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        ++result[word[0]];
    }

    map<char, int> maxMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxMap.clear();
            maxMap[pair.first] = pair.second;
            maxCount = pair.second;
        } else if (pair.second == maxCount) {
            maxMap[pair.first] = pair.second;
        }
    }

    return maxMap;
}