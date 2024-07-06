string get_closest_vowel(string word){
    int n = word.size();
    for(int i=n-1; i>=0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U'){
            for(int j=i-1; j>=0; j--){
                if(!isvowel(word[j])){
                    return (char)word[i];
                }
            }
        }
    }
    return "";
}

bool isvowel(char ch){
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }
    return false;
}