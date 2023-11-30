vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonant_count = 0;
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else {
            char c = tolower(s[i]);
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonant_count++;
            }
            word += s[i];
        }
    }
    
    return result;
}