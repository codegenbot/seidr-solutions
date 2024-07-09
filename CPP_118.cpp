string get_closest_vowel(string word){
    for(int i = word.length() - 1; i > 0; i--){
        if((word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u') && 
           (isalpha(word[i-1]) && !vowel(word[i-1])) &&
           (isalpha(word[i+1]) && !vowel(word[i+1])){
                return string(1,word[i]);
        }
    }
    return "";
}

bool vowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}