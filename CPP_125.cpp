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

    size_t posComma = txt.find(',');
    while ((posComma != string::npos)) {
        result.push_back(txt.substr(0, posComma));
        txt.erase(0, posComma + 1);
        posComma = txt.find(',');
    }

    if (!txt.empty()) {
        size_t count = 0;
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