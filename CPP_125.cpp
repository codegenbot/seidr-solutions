vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == string::npos || txt[pos] == ' ') {
            break;
        }
        if (txt.find(' ', pos) == string::npos && txt.find(',', pos) == string::npos) {
            int count = 0;
            for (char c : txt.substr(pos)) {
                if (c >= 'a' && c <= 'z') {
                    if ((count & 1)) {
                        result.push_back(to_string(count));
                    }
                    count++;
                } else {
                    break;
                }
            }
            return result;
        }
        size_t space = txt.find(' ', pos);
        size_t comma = txt.find(',', pos);
        if (space == string::npos) {
            space = txt.length();
        }
        if (comma == string::npos || comma > space) {
            pos = space;
        } else {
            pos = comma;
        }
    }

    if (pos < txt.length()) {
        int count = 0;
        for (char c : txt.substr(pos)) {
            if (c >= 'a' && c <= 'z') {
                if ((count & 1)) {
                    result.push_back(to_string(count));
                }
                count++;
            } else {
                break;
            }
        }
    }

    return result;
}