vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.length() > 1 && islower(txt[1])) {
                int count = 0;
                for (char c : txt) {
                    if (islower(c)) {
                        if (++count % 2 != 0) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                result.push_back(to_string(count));
                return result;
            }
        }
        string word = txt.substr(0, pos);
        txt.erase(0, pos + (pos == 0 ? 1 : pos > 1 && islower(txt[pos - 1]) ? 2 : 1));
        if (!word.empty()) {
            result.push_back(word);
        }
    }
    if (!txt.empty()) {
        result.push_back(txt);
    }
    return result;
}