vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.size() > 1 && isalpha(txt[1])) {
                int count = 0;
                for (char c : txt) {
                    if (isalpha(c)) {
                        if (c >= 'a' && c <= 'z') {
                            count++;
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
        txt.erase(0, pos + 1);
        if (!word.empty()) {
            result.push_back(word);
        }
    }
    if (!txt.empty()) {
        result.push_back(txt);
    }
    return result;
}