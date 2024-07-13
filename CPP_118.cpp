string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>0; --i){
        if(isvowel(word[i])){
            for(int j=i-1; j>=0; --j){
                if(!isvowel(word[j]) && !ispunct(word[j]))
                    return string(1,word[i]);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool ispunct(char c) {
    return (c == '.' || c == ',' || c == '!' || c == '?');
}