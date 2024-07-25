vector<string> select_words(string s, int n) {
    vector<string> result;
    string current_word;
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                consonant_count++;
            }
            current_word += c;
        }
    }
    
    if (consonant_count == n) {
        result.push_back(current_word);
    }
    
    return result;
}