vector<string> words;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
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
    if (words.empty()) {
        int odd_lowercase = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 != 0) {
                odd_lowercase++;
            }
        }
        words.push_back(to_string(odd_lowercase));
    }
    return words;
}