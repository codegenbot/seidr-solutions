vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    int consonants;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                words.push_back(word);
            }
            word = "";
            consonants = 0;
        } else {
            if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
                consonants++;
            }
            word += c;
        }
    }
    
    if (consonants == n) {
        words.push_back(word);
    }
    
    return words;
}