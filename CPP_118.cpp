string get_closest_vowel(string word){
    int n = word.size();
    for(int i=n-1; i>0; i--){
        if(vowel(word[i])){
            return string(1,word[i]);
        }
    }
    return "";
}

bool vowel(char c){
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}