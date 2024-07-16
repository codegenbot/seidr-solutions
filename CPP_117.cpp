vector<string> select_words(string s, int n){
    vector<string> words;
    string word = "";
    int consonant_count = 0;
    
    for(int i = 0; i <= s.size(); i++){
        if(i == s.size() || s[i] == ' '){
            if(consonant_count == n){
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if(isalpha(s[i]) && !strchr("aeiouAEIOU", s[i])){
            consonant_count++;
        }
        if(isalpha(s[i])){
            word += s[i];
        }
    }
    
    return words;
}