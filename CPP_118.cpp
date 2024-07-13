string get_closest_vowel(string word){
    for(int i = word.length() - 1; i > 0; i--){
        if(vowel(word[i])){
            int left = i;
            while(left > 0 && !consonant(word[left-1])){
                left--;
            }
            return (left < i) ? "" : string(1, word[i]);
        }
    }
    return "";
}

bool vowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool consonant(char c){
    c = tolower(c);
    return !vowel(c) && (c >= 'b' && c <= 'z');
}