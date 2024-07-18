vector<string> select_words(string s, int n) {
    vector<string> words;
    string current_word = "";
    int count_consonants = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants == n) {
                words.push_back(current_word);
            }
            current_word = "";
            count_consonants = 0;
        } else {
            if (isalpha(c) && strchr("aeiouAEIOU", c) == NULL) {
                count_consonants++;
            }
            current_word += c;
        }
    }
    
    if (count_consonants == n) {
        words.push_back(current_word);
    }
    
    return words;
}