vector<string> select_words(string s,int n){
    vector<string> result;
    if(s.empty()){
        return result;
    }
    string word="";
    int consonants = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            if(consonants == n){
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        }
        else{
            word += s[i];
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
                consonants++;
            }
        }
    }
    if(consonants == n){
        result.push_back(word);
    }
    return result;
}