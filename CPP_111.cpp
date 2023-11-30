map<char, int> histogram(string test) {
    map<char, int> result;
    string word;
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                result[word[0]]++;
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result[word[0]]++;
    }
    return result;
}