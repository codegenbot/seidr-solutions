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
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                count++;
            }
            word += c;
        }
    }
    
    if (count == n) {
        result.push_back(word);
    }
    
    return result;
}