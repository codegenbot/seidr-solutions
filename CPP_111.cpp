map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique_copy(letters)) {
        int count = 0;
        for (string::size_type i = 0; i < letters.size(); ++i) {
            if (letters[i] == c) {
                ++count;
                letters.erase(i--);
            }
        }
        result[c] = count;
    }

    return result;
}