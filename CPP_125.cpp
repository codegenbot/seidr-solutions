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
    if (!hasWhitespace) {
        if (word.empty()) {
            words.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c) { return islower(c) && (c - 'a') % 2 == 1; })));
        } else {
            words.push_back(word);
        }
    } else {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;