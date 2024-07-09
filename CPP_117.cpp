
vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int count = 0;
    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else if (isalpha(c) && strchr("aeiouAEIOU", c) == NULL) {
            count++;
        }
        word += c;
    }
    
    if (!word.empty() && count == n) {
        result.push_back(word);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));