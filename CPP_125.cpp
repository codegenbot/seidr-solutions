vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    string token;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            token = txt.substr(0, pos);
            txt.erase(0, pos);
        } else {
            token = txt.substr(0, pos);
            txt.erase(0, pos);
            pos = 0;
        }

        if (!token.empty()) {
            result.push_back(token);
        }
    }

    if (!txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((count++) % 2 == 1) {
                    result.push_back(to_string(count));
                    break;
                }
            }
        }

        if (result.empty()) {
            result.push_back(to_string(0));
        }
    }

    return result;
}