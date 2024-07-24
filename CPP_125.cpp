vector<string> split_words(string txt) {
    vector<string> result;

    if (txt.find(' ') != string::npos) {
        size_t pos = 0;
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    } else {
        size_t pos = 0;
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            int oddLowercaseLetters = 0;
            for (char c : txt) {
                if (c >= 'a' && c <= 'z') {
                    if ((ord(c) - ord('a')) % 2 != 0) {
                        oddLowercaseLetters++;
                    }
                } else if (c >= 'A' && c <= 'Z') {
                    if ((ord(c) - ord('A')) % 2 != 0) {
                        oddLowercaseLetters++;
                    }
                }
            }
            result.push_back(to_string(oddLowercaseLetters));
        }
    }

    return result;
}