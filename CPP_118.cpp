string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>=0; --i){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U'){
            for(int j=i-1; j>=0; --j){
                if(!isvowel(word[j])){
                    return word.substr(j+1, i-j-1);
                }
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    if(c >= 'a' && c <= 'z') 
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    else if(c >= 'A' && c <= 'Z')
        return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    return false;
}