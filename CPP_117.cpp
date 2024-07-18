vector<string> select_words(string s, int n){
    vector<string> words;
    string word = "";
    int consonants = 0;
    for(char c : s){
        if(c == ' '){
            if(consonants == n){
                words.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if(isalpha(c)){
            if(tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u'){
                consonants++;
            }
            word += c;
        }
    }
    if(consonants == n){
        words.push_back(word);
    }
    return words;
}