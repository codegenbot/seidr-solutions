vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (char c : txt) {
        if (c == ' ') {
            hasWhitespace = true;
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            hasComma = true;
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    if (!hasWhitespace && !hasComma) {
        int oddCount = 0;
        for (char c : txt) {
            if (islower(c) && ((c - 'a') % 2 != 0)) {
                oddCount++;
            }
        }
        words.push_back(to_string(oddCount));
    }

    return words;
}