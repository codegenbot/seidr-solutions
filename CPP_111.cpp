map<char, int> histogram(string test) {
    map<char, int> countMap;
    string word;
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                countMap[word[0]]++;
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        countMap[word[0]]++;
    }
    return countMap;
}