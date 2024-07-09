vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while (pos < txt.size()) {
        if (isspace(txt[pos])) {
            pos++;
            continue;
        }
        size_t nextPos = txt.find_first_of(" ,", pos);
        if (nextPos == string::npos) {
            result.push_back(txt.substr(pos));
            break;
        } else {
            result.push_back(txt.substr(pos, nextPos - pos));
            pos = nextPos;
        }
    }
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
                if ((count % 2) == 1) {
                    result.push_back(to_string(count));
                    break;
                }
            }
        }
    }
    return result;
}