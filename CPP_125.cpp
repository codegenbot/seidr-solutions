vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos) {
                int count = 0;
                for (char c : txt) {
                    if (c >= 'a' && c <= 'z' && (count & 1)) {
                        count++;
                    }
                }
                result.push_back(to_string(count));
            } else {
                result.push_back(txt.substr(0, pos));
                txt.erase(0, pos + 1);
            }
        } else {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos);
        }
    }
    if (!txt.empty()) {
        result.push_back(txt);
    }
    return result;
}