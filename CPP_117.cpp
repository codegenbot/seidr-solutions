vector<string> select_words(string s, int n) {
        vector<string> result;
        if (s.empty()) {
            return result;
        }
        
        string word = "";
        int consonantCount = 0;
        for (char c : s) {
            if (isalpha(c)) {
                if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                    if (!word.empty()) {
                        if (consonantCount == n) {
                            result.push_back(word);
                        }
                        word = "";
                        consonantCount = 0;
                    }
                } else {
                    consonantCount++;
                }
                word += c;
            } else {
                if (!word.empty() && consonantCount == n) {
                    result.push_back(word);
                }
                word = "";
                consonantCount = 0;
            }
        }
        
        if (!word.empty() && consonantCount == n) {
            result.push_back(word);
        }
        
        return result;
    }