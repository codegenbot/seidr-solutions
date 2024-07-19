map<char, int> histogram(string test) {
    map<char, int> result;
    string word = "";
    for (char c : test) {
        if (c == ' ') {
            for (char letter : word) {
                result[letter]++;
            }
            word = "";
        } else {
            word += c;
        }
    }
    for (char letter : word) {
        result[letter]++;
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> maxLetters;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxLetters[pair.first] = pair.second;
        }
    }
    return maxLetters;
}