vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    string current_word = "";
    int consonant_count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            current_word += s[i];
            if (is_consonant(s[i])) {
                consonant_count++;
            }
        } else {
            if (consonant_count == n) {
                result.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        }
    }
    if (consonant_count == n) {
        result.push_back(current_word);
    }
    return result;
}