vector<string> words;
    string word = "";
    bool hasWhiteSpace = false;
    for (char c : txt) {
        if (c == ' ') {
            hasWhiteSpace = true;
            words.push_back(word);
            word = "";
        } else if (c == ',') {
            hasWhiteSpace = true;
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (hasWhiteSpace || txt.find(',') != string::npos) {
        if (!word.empty()) {
            words.push_back(word);
        }
    } else {
        int oddCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                oddCount++;
            }
        }
        words.push_back(to_string(oddCount));
    }
    return words;
}