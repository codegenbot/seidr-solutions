vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for (char c : txt) {
        if (c == ' ') {
            hasWhitespace = true;
            words.push_back(word);
            word = "";
        } else if (c == ',') {
            hasComma = true;
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    if (hasWhitespace) {
        if (!word.empty()) {
            words.push_back(word);
        }
    } else if (hasComma) {
        if (!word.empty()) {
            words.push_back(word);
        }
    } else {
        if (!word.empty()) {
            int count = 0;
            for (char c : word) {
                if (islower(c) && ((c - 'a') % 2 == 1)) {
                    count++;
                }
            }
            words.push_back(to_string(count));
        }
    }
    
    return words;
}