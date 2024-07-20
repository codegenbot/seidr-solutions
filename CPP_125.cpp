vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    for (char c : txt) {
        if (isspace(c)) {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }

    if (!hasWhitespace) {
        int oddLowerCount = 0;
        for (char c : txt) {
            if (islower(c)) {
                int order = c - 'a';
                if (order % 2 == 1) {
                    oddLowerCount++;
                }
            }
        }
        result.push_back(to_string(oddLowerCount));
    }

    return result;
}