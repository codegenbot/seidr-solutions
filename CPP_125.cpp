vector<string> split_words(string txt) {
    vector<string> words;
    string word;
    bool hasWhitespace = (txt.find(' ') != string::npos);
    bool hasComma = (txt.find(',') != string::npos);

    if (hasWhitespace) {
        for (char c : txt) {
            if (c != ' ') {
                word += c;
            } else {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }
    } else if (hasComma) {
        for (char c : txt) {
            if (c != ',') {
                word += c;
            } else {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }
    } else {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
            }
        }
        words.push_back(to_string(count));
    }

    return words;
}