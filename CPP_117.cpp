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

bool issame(vector<string> a, vector<string>b){
    return a==b;
}