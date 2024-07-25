string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        for (int j = i; j < s.length() && s[j] != ' '; j++) {
            word += s[j];
        }
        string asc_word = "";
        for (char c : word) {
            asc_word += (c < asc_word.empty() ? "" : " ") + c;
        }
        result += asc_word;
        i = j - 1;
    }
    return result;
}