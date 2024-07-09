vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            int consonants = 0;
            for (char ch : word) {
                if (!isalpha(ch)) continue;
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'
                    && tolower(ch) >= 'b' && tolower(ch) <= 'z') {
                    consonants++;
                }
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    int consonants = 0;
    for (char ch : word) {
        if (!isalpha(ch)) continue;
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'
            && tolower(ch) >= 'b' && tolower(ch) <= 'z') {
            consonants++;
        }
    }
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}