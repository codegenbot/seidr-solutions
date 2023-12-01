map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string word;
    for (char ch : test) {
        if (ch == ' ') {
            if (!word.empty()) {
                result[word[0]]++;
                word.clear();
            }
        } else {
            word += ch;
        }
    }
    if (!word.empty()) {
        result[word[0]]++;
    }
    return result;
}