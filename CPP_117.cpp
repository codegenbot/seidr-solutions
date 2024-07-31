bool issame(vector<string> v1, vector<string> v2) {
        return v1 == v2;
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
        
        return !result.empty();
    }

    int main() {
        // Your main function code here
        return 0;
    }