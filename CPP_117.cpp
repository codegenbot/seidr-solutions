vector<string> select_words(string s, int n){
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    int count;
    bool isVowel;
    
    for (char c : s) {
        if (c == ' ') {
            if (count == n && !isVowel) {
                result.push_back(word);
            }
            word = "";
            count = 0;
            isVowel = false;
        } else {
            word += c;
            if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
                count++;
            } else if (isalpha(c)) {
                isVowel = true;
            }
        }
    }
    
    if (count == n && !isVowel) {
        result.push_back(word);
    }
    
    return result;
}