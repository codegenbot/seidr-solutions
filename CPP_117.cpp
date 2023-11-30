vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            int consonantCount = 0;
            for (int j = 0; j < word.length(); j++) {
                if (word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u') {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                words.push_back(word);
            }
            word = "";
        }
    }
    int consonantCount = 0;
    for (int j = 0; j < word.length(); j++) {
        if (word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u') {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        words.push_back(word);
    }
    return words;
}