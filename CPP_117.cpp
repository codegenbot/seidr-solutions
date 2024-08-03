bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        int counta = 0, countb = 0;
        for(char c : a[i]){
            if(!ispunct(c) && !isalpha(c) || isvowel(c))continue;
            counta++;
        }
        for(char c : b[i]){
            if(!ispunct(c) && !isalpha(c) || isvowel(c))continue;
            countb++;
        }
        if(counta!=countb)return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int consonants = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isalpha(ch) || isvowel(ch)) {
                    continue;
                }
                consonants++;
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}