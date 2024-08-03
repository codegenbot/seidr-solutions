bool issame(vector<string> a, vector<string> b) {
    vector<string> words;
    string word;
    for (char c : a) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words == b;
}