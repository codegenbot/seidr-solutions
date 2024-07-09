string get_closest_vowel(string word){
    int i = word.size() - 1; // start from the end of the string
    while(i >= 0 && !isvowel(word[i])) {
        --i;
    }
    if (i < 0) return "";
    
    for(int j=i-1; j >= 0; --j) {
        if (!isconsonant(word[j]))
            return word.substr(j+1, i-j);
    }
    
    return word.substr(0, i);
}

bool isvowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isconsonant(char c){
    return !isvowel(c) && (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}