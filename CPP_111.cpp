map<char, int> histogram(string test) {
    map<char, int> result;

    for (char letter : test) {
        if (letter != ' ' && result.find(letter) == result.end()) {
            result[letter] = 1;
        } else if (letter != ' ') {
            result[letter]++;
        }
    }

    return result;
}