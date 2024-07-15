vector<string> select_words(string s, int n) {
    vector<string> words;
    string current_word;
    int num_consonants = 0;
    for (char c : s) {
        if (c == ' ') {
            if (num_consonants == n) {
                words.push_back(current_word);
            }
            current_word = "";
            num_consonants = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                num_consonants++;
            }
            current_word += c;
        }
    }
    if (num_consonants == n) {
        words.push_back(current_word);
    }
    return words;
}