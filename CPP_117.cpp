vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (isalpha(s[i]) && !isVowel(s[i])) {
                count++;
            }
        } else {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        }
    }
    
    if (count == n) {
        result.push_back(word);
    }
    
    return result;
}