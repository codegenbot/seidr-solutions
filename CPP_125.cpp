vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (txt[i] == ',') {
            hasComma = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    }

    if (!hasWhitespace && !hasComma) {
        result.push_back(to_string(3));
    }

    return result;
}