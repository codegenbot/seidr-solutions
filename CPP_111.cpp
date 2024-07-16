map<char, int> histogram(string test) {
    map<char, int> letterCount;
    string word;
    for (char c : test) {
        if (isalpha(c)) {
            word += c;
        } else if (!word.empty()) {
            letterCount[word]++;
            word.clear();
        }
    }
    if (!word.empty()) {
        letterCount[word]++;
    }

    int maxCount = 0;
    for (const auto& pair : letterCount) {
        maxCount = max(maxCount, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : letterCount) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}