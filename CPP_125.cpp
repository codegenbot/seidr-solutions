vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find_first_of(", ", pos)) != string::npos) {
        txt[pos] = ' ';
    }
    while ((pos = txt.find_first_not_of(" ,", pos)) != string::npos) {
        size_t endPos = txt.find_first_of(" ,", pos);
        string word = txt.substr(pos, endPos - pos);
        result.push_back(word);
        pos = endPos;
    }
    if (result.empty()) {
        int charCount = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                charCount++;
            }
        }
        result.push_back(to_string(charCount));
    }
    return result;