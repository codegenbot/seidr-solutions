vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (txt.empty()) {
        return result;
    }

    if (txt.find(',') == string::npos) {
        int oddLowercase = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 != 0) {
                    oddLowercase++;
                }
            }
        }
        result.push_back(to_string(oddLowercase));
    } else {
        size_t pos = 0;
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }

    return result;
}