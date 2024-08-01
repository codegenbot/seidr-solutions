vector<string> split_words(string txt) {
    vector<string> result;

    if (txt.find(' ') != string::npos) {
        size_t pos = 0;
        while ((pos = txt.find(' ')) != string::npos) {
            string word = txt.substr(0, pos);
            result.push_back(word);
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    } else if (txt.find(',') != string::npos) {
        size_t pos = 0;
        while ((pos = txt.find(',')) != string::npos) {
            string word = txt.substr(0, pos);
            result.push_back(word);
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    } else {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 != 0) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}