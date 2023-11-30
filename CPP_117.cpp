vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            int consonants = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isVowel(word[j])) {
                    consonants++;
                }
            }
            if (consonants == n) {
                words.push_back(word);
            }
            word = "";
        }
    }
    
    int consonants = 0;
    for (int j = 0; j < word.length(); j++) {
        if (isalpha(word[j]) && !isVowel(word[j])) {
            consonants++;
        }
    }
    if (consonants == n) {
        words.push_back(word);
    }
    
    return words;
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}