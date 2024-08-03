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
        for (int i = ord('a'); i <= ord('z'); i++) {
            if ((i % 2) != 0) {
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    } else {
        result.push_back(txt);
    }

    return result;
}