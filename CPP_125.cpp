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
            words.push_back("0");
        } else {
            int count = 0;
            for (char c : word) {
                if (islower(c) && (c - 'a') % 2 == 1) {
                    count++;
                }
            }
            words.push_back(to_string(count));
        }
    } else {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    
    return words;
}