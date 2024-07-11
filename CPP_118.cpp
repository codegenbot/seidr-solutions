string get_closest_vowel(string word){
    int n = word.length();
    for(int i=n-1; i>=1; --i){
        if(tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || 
           tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || 
           tolower(word[i]) == 'u'){
            return word.substr(i);
        }
    }
    return "";
}