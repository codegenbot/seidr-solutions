string anti_shuffle(string s) {
    string result = "";
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            string word;
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                ++i;
            }
            string orderedWord = word;
            sort(orderedWord.begin(), orderedWord.end());
            for (char c : word) {
                result += c;
            }
            while (i < s.size() && s[i] == ' ') {
                ++i;
            }
        }
    }
    return result;
}