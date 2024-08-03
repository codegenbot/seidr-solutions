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
    for (char& c : txt) {
        if (!isalpha(c) || !islower(c)) {
            break;
        }
    }
    if (result.empty() && c == '\0') {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && ++count % 2 == 1) {
                result.push_back(to_string(count));
                return result;
            }
        }
    }
    return {txt};
}