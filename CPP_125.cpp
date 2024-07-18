vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,", pos)) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
        pos = 0;
    }
    if (!txt.empty()) {
        result.push_back(txt);
    }
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 != 0) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;