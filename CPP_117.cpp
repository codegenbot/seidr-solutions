bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0;i<a.size();++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            int count = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isvowel(word[j])) {
                    count++;
                }
            }
            if (count == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    int count = 0;
    for (int j = 0; j < word.length(); j++) {
        if (isalpha(word[j]) && !isvowel(word[j])) {
            count++;
        }
    }
    if (count == n) {
        result.push_back(word);
    }
    return result;
}