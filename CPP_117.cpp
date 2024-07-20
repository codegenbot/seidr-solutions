vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    int consonantCount = 0;
    
    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                if (!word.empty() && consonantCount == n) {
                    words.push_back(word);
                    word = "";
                    consonantCount = 0;
                } else {
                    word = "";
                    consonantCount = 0;
                }
            } else {
                word += c;
                consonantCount++;
            }
        } else {
            if (!word.empty() && consonantCount == n) {
                words.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }
    
    if (!word.empty() && consonantCount == n) {
        words.push_back(word);
    }
    
    return words;
}