vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (char c : s) {
        if (c == ' ' || c == '\0') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
            consonants++;
        }
        word += c;
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}