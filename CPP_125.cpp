vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos;
    if ((pos = txt.find(' ')) != string::npos) {
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else if ((pos = txt.find(',')) != string::npos) {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && ((c - 'a') % 2 == 1)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}