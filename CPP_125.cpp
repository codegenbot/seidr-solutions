vector<string> split_words(string txt) {
    string word;
    vector<string> words;

    for (char c : txt) {
        if (isspace(c)) {
            words.push_back(word);
            word = "";
        } else if (c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (!word.empty())
        words.push_back(word);

    if (words.size() > 1) return words;

    int count = 0;
    for (char c : txt) {
        if (islower(c)) {
            count++;
        }
    }
    return {to_string(count)};
}