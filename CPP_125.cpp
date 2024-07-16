vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
            if (c == ' ') {
                hasWhitespace = true;
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    if (words.empty()) {
        if (hasWhitespace) {
            words.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c) { return islower(c) && (c - 'a') % 2 == 1; })));
        } else {
            words.push_back(txt);
        }
    }
    return words;
}