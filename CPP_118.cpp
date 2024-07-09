string get_closest_vowel(string word){
    for(int i = word.length() - 1; i > 0; i--){
        if(vowel(word[i])){
            int j;
            for(j = i-1; j >= 0 && !vowel(word[j]); j--);
            return (j < 0) ? "" : string(1, word[j+1]);
        }
    }
    return "";
}

bool vowel(char c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}