vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    string token;

    while ((pos = txt.find(' ')) != string::npos) {
        token = txt.substr(0, pos);
        result.push_back(token);
        txt.erase(0, pos + 1);
    }

    if (txt.empty()) {
        return result;
    }

    result.push_back(txt);

    else {
        size_t pos2 = 0;
        while ((pos2 = txt.find(',')) != string::npos) {
            token = txt.substr(0, pos2);
            result.push_back(token);
            txt.erase(0, pos2 + 1);
        }

        if (!txt.empty()) {
            result.push_back(txt);
        }
        else {
            int count = 0;
            for (char c : txt) {
                if ((int)c >= 97 && (int)c <= 122) {
                    count++;
                    if (count % 2 != 0) {
                        result.push_back(to_string(count));
                    }
                }
            }
        }
    }

    return result;
}