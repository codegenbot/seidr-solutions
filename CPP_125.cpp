vector<string> split_words(string txt) {
    vector<string> result;

    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (txt.empty()) {
        return result;
    }

    bool foundComma = false;
    for (char& c : txt) {
        if (c == ',') {
            foundComma = true;
            break;
        }
    }

    if (!foundComma) {
        int oddCount = 0;
        for (char& c : txt) {
            if (tolower(c) >= 'a' && tolower(c) <= 'z' && (int)tolower(c) % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    } else {
        size_t pos = 0;
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }

    return result;
}