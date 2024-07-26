map<char, int> histogram(string test) {
    map<char, int> counts;
    string word;
    for (char c : test) {
        if (c != ' ') {
            word += c;
        } else {
            for (char letter : word) {
                counts[letter]++;
            }
            word = "";
        }
    }
    for (char letter : word) {
        counts[letter]++;
    }
    int maxCount = 0;
    for (const auto& pair : counts) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> result;
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}