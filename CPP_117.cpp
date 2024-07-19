vector<string> select_words(string s, int n) {
    vector<string> words;
    string current_word;
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                words.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            current_word += c;
        }
    }

    if (consonant_count == n) {
        words.push_back(current_word);
    }

    return words;
}