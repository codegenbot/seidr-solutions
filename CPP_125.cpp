vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    for (char c : txt) {
        if (c == ' ') {
            hasWhitespace = true;
            words.push_back(word);
            word = "";
        } else if (c == ',') {
            hasWhitespace = true;
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (hasWhitespace || word.empty()) {
        return words;
    } else {
        int count = 0;
        for (char c : word) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        return {to_string(count)};
    }
}