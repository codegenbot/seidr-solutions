string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += ' ';
            continue;
        }
        string word = "";
        for (int j = i; j <= s.find(' ', i); j++) {
            word += s[j];
        }
        sort(word.begin(), word.end());
        result += word;
        i += word.size() - 1;
    }
    return result;
}