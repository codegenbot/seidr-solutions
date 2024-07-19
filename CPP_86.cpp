string result = "";
    string word = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ' || i == s.length() - 1) {
            sort(word.begin(), word.end());
            result += word + (i == s.length() - 1 ? "" : " ");
            word = "";
        } else {
            word += s[i];
        }
    }
    return result;
}