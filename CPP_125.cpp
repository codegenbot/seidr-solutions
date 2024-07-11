vector<string> result;
    size_t found = txt.find(" ");
    if (found != string::npos) {
        size_t prev = 0;
        size_t pos = 0;
        while (pos != string::npos) {
            pos = txt.find(" ", prev);
            result.push_back(txt.substr(prev, pos - prev));
            prev = pos + 1;
        }
    } else {
        found = txt.find(",");
        if (found != string::npos) {
            size_t prev = 0;
            size_t pos = 0;
            while (pos != string::npos) {
                pos = txt.find(",", prev);
                result.push_back(txt.substr(prev, pos - prev));
                prev = pos + 1;
            }
        } else {
            int odd_chars = 0;
            for (char c : txt) {
                if (islower(c) && (c - 'a') % 2 == 1) {
                    odd_chars++;
                }
            }
            result.push_back(to_string(odd_chars));
        }
    }
    return result;
}