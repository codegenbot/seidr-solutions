vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    while ((pos = txt.find(' ')) != std::string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (txt.empty()) {
        return result;
    }

    pos = txt.find(',');
    if (pos == std::string::npos) {
        int oddCount = 0;
        for (char c : txt) {
            if (std::isalpha(c)) {
                if ((c - 'a') % 2 != 0) {
                    oddCount++;
                }
            }
        }
        result.push_back(std::to_string(oddCount));
    } else {
        while ((pos = txt.find(',')) != std::string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }

    return result;
}