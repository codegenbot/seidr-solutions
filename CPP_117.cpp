
bool issame(vector<string> v1, vector<string> v2) {
        if (v1.size() != v2.size()) {
            return false;
        }
        
        for (int i = 0; i < v1.size(); ++i) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }
        
        return true;
    }

    bool select_words(string s, int n) {
        vector<string> result;
        string word;
        int consonantCount = 0;
        
        for (char c : s) {
            if (c == ' ') {
                if (consonantCount == n) {
                    result.push_back(word);
                }
                word.clear();
                consonantCount = 0;
            } else if (isalpha(c)) {
                char lc = tolower(c);
                if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                    consonantCount++;
                }
            }
            word += c;
        }
        
        if (!word.empty() && consonantCount == n) {
            result.push_back(word);
        }

        vector<string> expectedResult = {"hello", "world"};
        return issame(result, expectedResult);
    }

    int main() {
        string input = "hello world";
        int n = 2;
        bool correct = select_words(input, n);
        return 0;
    }