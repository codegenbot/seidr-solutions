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

    int maxCount = 0;
    for (auto& p : result) {
        if (p.second > maxCount) maxCount = p.second;
    }

    map<char, int> mostRepeated;
    for (auto& p : result) {
        if (p.second == maxCount) mostRepeated[p.first] = p.second;
    }

    return mostRepeated;
}