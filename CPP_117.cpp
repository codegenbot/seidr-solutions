vector<string> words;
    string currentWord = "";
    int consonantCount = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                words.push_back(currentWord);
            }
            currentWord = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                consonantCount++;
            }
        }
        currentWord.push_back(c);
    }
    
    if (consonantCount == n) {
        words.push_back(currentWord);
    }
    
    return words;
}