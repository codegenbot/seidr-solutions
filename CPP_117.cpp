vector<string> select_words(string s, int n){
    vector<string> result;
    
    if(s.empty()){
        return result;
    }
    
    string word = "";
    int consonant_count = 0;
    
    for(char c : s){
        if(c == ' '){
            if(consonant_count == n){
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if(isalpha(c)){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'){
                consonant_count++;
            }
            word += c;
        } 
    }
    
    if(consonant_count == n){
        result.push_back(word);
    }
    
    return result;
}