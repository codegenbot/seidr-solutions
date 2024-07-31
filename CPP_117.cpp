vector<string> select_words(string s, int n) {
        vector<string> result;
        string currentWord = "";
        for (char c : s) {
            if (c != ' ') {
                currentWord += c;
            } else {
                int consonantCount = 0;
                for (char l : currentWord) {
                    if (isalpha(l) && strchr("aeiouAEIOU", l) == nullptr) {
                        consonantCount++;
                    }
                }
                if (consonantCount == n) {
                    result.push_back(currentWord);
                }
                currentWord = "";
            }
        }
        int consonantCount = 0;
        for (char l : currentWord) {
            if (isalpha(l) && strchr("aeiouAEIOU", l) == nullptr) {
                consonantCount++;
            }
        }
        if (consonantCount == n) {
            result.push_back(currentWord);
        }
        return result;
    }