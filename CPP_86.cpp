string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += ' ';
            continue;
        }
        string word = "";
        for (int j = i; j < s.size() && s[j] != ' '; j++) {
            word += s[j];
        }
        i = j;
        sort(word.begin(), word.end());
        result += word;
    }
    return result;
}