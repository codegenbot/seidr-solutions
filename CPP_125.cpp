vector<string> split_words(string txt) {
    vector<string> result;

    for (int i = 0; i < txt.length(); i++) {
        if (!isalnum(txt[i]) && !ispunct(txt[i])) {
            if (i > 0) {
                string word = txt.substr(0, i);
                if (word.length() == 1) {
                    result.push_back(to_string(word[0]));
                } else {
                    result.push_back(word);
                }
                txt.erase(0, i);
                i = -1;
            }
        }
    }

    if (!txt.empty()) {
        string word = txt;
        result.push_back(word);
    }

    return result;
}