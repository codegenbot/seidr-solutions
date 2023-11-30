bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

vector<string> select_words(string s, int n);

bool is_same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_same(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
    // Add more test cases if needed

    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (isalpha(s[i]) && !isvowel(s[i])) {
                consonantCount++;
            }
        }
        else {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }
    
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}