string get_closest_vowel(string word){
    for(int i = word.size() - 1; i > 0; --i){
        if(vowel(word[i])){
            int left = 0;
            while(i - left > 0 && !consonant(word[i - left - 1])){
                ++left;
            }
            if(left < i) return string(1, word[i]);
        }
    }
    return "";
}

bool consonant(char c){
    return (c >= 'a' && c <= 'z') ? c - 'a' >= 6 : (c >= 'A' && c <= 'Z') ? c - 'A' >= 6 : false;
}

bool vowel(char c){
    return (c >= 'a' && c <= 'z') ? c - 'a' < 6 : (c >= 'A' && c <= 'Z') ? c - 'A' < 6 : false;
}