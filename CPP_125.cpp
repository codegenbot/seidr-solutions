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
    result.push_back(txt);
    size_t commaPos = 0;
    while ((commaPos = txt.find(',')) != string::npos) {
        result.push_back(txt.substr(0, commaPos));
        txt.erase(0, commaPos + 1);
    }
    if (!txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 != 0) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    } else {
        result.push_back(to_string(0));
    }
    return result;
}