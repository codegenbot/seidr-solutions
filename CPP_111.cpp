map<char, int> histogram(string test) {
    map<char, int> result;
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }
    return result;
}