bool issame(vector<string> vect1, vector<string> vect2) {
    if (vect1.size() != vect2.size()) {
        return false;
    }
    
    for (int i = 0; i < vect1.size(); ++i) {
        if (vect1[i] != vect2[i]) {
            return false;
        }
    }
    
    return true;
}

bool select_words(string s, int n);

vector<string> select_words(string s, int n) {
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
    
    return result;
}