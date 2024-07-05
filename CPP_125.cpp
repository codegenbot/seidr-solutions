vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;

    if (txt.find(' ') != string::npos) {
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
    } else if (txt.find(',') != string::npos) {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
    } else {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && ((c - 'a') % 2 == 0)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    if (!txt.empty()) {
        result.push_back(txt);
    }
    return result;
}