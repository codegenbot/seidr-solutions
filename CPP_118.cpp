string get_closest_vowel(string word){
    int n = word.length();
    if(n < 4){
        return "";
    }
    for(int i = n-3; i >= 1; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            return string(1, word[i]);
        }
    }
    return "";
}