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
    for (size_t i = 0; i < txt.length(); ++i) {
        if (!isalpha(txt[i])) {
            result.push_back(txt.substr(0, i));
            txt.erase(0, i);
            break;
        }
    }
    if (txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    } else {
        result.push_back(txt);
    }
    return result;
}