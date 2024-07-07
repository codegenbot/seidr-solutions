string get_closest_vowel(string word) {
    for(int i = word.size() - 2; i > 0; --i){
        if(isvowel(word[i])){
            return string(1,word[i]);
        }
    }
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}