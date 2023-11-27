map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string letter;
    for (char c : test) {
        if (c == ' ') {
            result[letter]++;
            letter = "";
        } else {
            letter += c;
        }
    }
    result[letter]++;
    return result;
}