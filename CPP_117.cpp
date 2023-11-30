vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            word += s[i];
        } else if (!word.empty()) {
            int consonantCount = 0;
            for (int j = 0; j < word.length(); j++) {
                if (!isVowel(word[j])) {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    
    return result;
}