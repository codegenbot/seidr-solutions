vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;

    while (pos < txt.size()) {
        if (txt[pos] == ' ') {
            // Split on whitespace
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
            pos = 0;
        } else if (pos >= txt.size() - 1 || txt[pos + 1] != ',') {
            // No comma or end of string, split on whitespace
            size_t nextPos = txt.find(' ');
            if (nextPos == string::npos) {
                result.push_back(txt);
                return result;
            }
            result.push_back(txt.substr(0, nextPos));
            txt.erase(0, nextPos + 1);
        } else {
            // Split on comma
            size_t nextComma = txt.find(',');
            if (nextComma == string::npos) {
                result.push_back(txt);
                return result;
            }
            result.push_back(txt.substr(0, nextComma));
            txt.erase(0, nextComma + 1);
        }
    }

    // No whitespace or commas, count odd letters
    int count = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z') {
            if ((int)c % 2 != 0) {
                count++;
            }
        }
    }
    result.push_back(to_string(count));

    return result;
}