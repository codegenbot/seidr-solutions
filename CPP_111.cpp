map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    size_t count = 0;
    char letter = '\0';
    for (char c : test) {
        if (c == ' ') {
            if (count > 0) {
                result[letter] = count;
                count = 0;
            }
            letter = '\0';
        } else {
            if (letter == '\0') {
                letter = c;
                count = 1;
            } else {
                if (c == letter) {
                    count++;
                } else {
                    result[letter] = count;
                    letter = c;
                    count = 1;
                }
            }
        }
    }

    if (count > 0) {
        result[letter] = count;
    }

    return result;
}