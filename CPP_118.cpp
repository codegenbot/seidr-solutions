string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i > 0; --i){
        if(!isalpha(word[i])){
            continue;
        }
        if(isvowel(word[i])){
            return string(1, topper(word[i]));
        }
        for(int j = i-1; isalpha(word[j]) && !isvowel(word[j]); --j){}
        if(j >= 0 && isvowel(word[j])){
            return string(1, topper(word[j]));
        }
    }
    return "";
}