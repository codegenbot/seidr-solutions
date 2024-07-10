vector<string> select_words(string s, int n){
    vector<string> result;
    string word;
    int consonantCount = 0;
    
    for (char c : s) {
        if (c != ' '){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                if (!word.empty() && consonantCount == n) {
                    result.push_back(word);
                    word.clear();
                    consonantCount = 0;
                } else {
                    word.clear();
                    consonantCount = 0;
                }
            } else {
                word += c;
                consonantCount++;
            }
        } else {
            if (!word.empty() && consonantCount == n) {
                result.push_back(word);
                word.clear();
                consonantCount = 0;
            } else {
                word.clear();
                consonantCount = 0;
            }
        }
    }
    
    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}