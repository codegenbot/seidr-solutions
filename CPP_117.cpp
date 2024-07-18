vector<string> select_words(string s, int n) {
        vector<string> result;
        if (s.empty()) {
            return result;
        }
        
        string word = "";
        for (char c : s) {
            if (isalpha(c)) {
                word += c;
            } else {
                if (!word.empty()) {
                    int consonant_count = count_if(word.begin(), word.end(), [](char c) {
                        return !strchr("aeiouAEIOU", c);
                    });
                    if (consonant_count == n) {
                        result.push_back(word);
                    }
                    word = "";
                }
            }
        }

        if (!word.empty()) {
            int consonant_count = count_if(word.begin(), word.end(), [](char c) {
                return !strchr("aeiouAEIOU", c);
            });
            if (consonant_count == n) {
                result.push_back(word);
            }
        }

        return result;
    }