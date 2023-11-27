map<char, int> histogram(string test) {
    map<char, int> counts;
    string word;
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                counts[word[0]]++;
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        counts[word[0]]++;
    }
    return counts;
}