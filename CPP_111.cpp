map<char, int> histogram(string test) {
    map<char, int> result;
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            if (letter != "") {
                result[letter[0]]++;
                letter = "";
            }
        }
    }
    if (letter != "") {
        result[letter[0]]++;
    }
    return result;
}