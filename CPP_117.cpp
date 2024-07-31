vector<string> select_words(string s, int n) {
    vector<string> words;
    string current_word = "";
    int consonant_count = 0;
    
    auto is_consonant = [](char c) {
        return !isalpha(c) || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    };
    
    for (char c : s) {
        if (c != ' ') {
            current_word += c;
            if (is_consonant(tolower(c))) {
                consonant_count++;
            }
        } else {
            if (consonant_count == n) {
                words.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        }
    }
    
    if (consonant_count == n) {
        words.push_back(current_word);
    }
    
    return words;
}