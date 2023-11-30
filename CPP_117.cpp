vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else if (isalpha(s[i])) {
            if (tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u') {
                count++;
            }
            word += s[i];
        }
    }

    return result;
}