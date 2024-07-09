vector<string> select_words(string s, int n) {
    vector<string> result;
    string current_word;
    bool in_word = false;
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (!current_word.empty() && consonant_count == n) {
                result.push_back(current_word);
            }
            current_word.clear();
            in_word = false;
            consonant_count = 0;
        } else {
            if (isalpha(c)) {
                current_word.push_back(c);
                if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                    consonant_count++;
                }
                in_word = true;
            }
        }
    }
    
    if (!current_word.empty() && consonant_count == n) {
        result.push_back(current_word);
    }
    
    return result;
}