vector<string> result;
    string word = "";
    int consonants = 0;
    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if (isalpha(c) && strchr("aeiouAEIOU", c) == NULL) {
            consonants++;
        }
        word += c;
    }
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}