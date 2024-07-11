string get_closest_vowel(string word){
    for(int i = word.size() - 1; i > 0; --i){
        if(vowel(word[i])){
            int left = 0;
            while(i-left > 0 && !consonant(word[i-left])){
                ++left;
            }
            if(left < i){
                return string(1, word[i]);
            }
        }
    }
    return "";
}

bool vowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool consonant(char c){
    return (!vowel(c));
}