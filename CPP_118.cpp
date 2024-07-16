int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string get_closest_vowel(string word){
    int n = word.size(), pos = -1;
    
    for(int i = n-2; i >= 1; --i) {
        if (!isVowel(word[i]) && isVowel(word[i-1]) && !isVowel(word[i+1])) {
            pos = i;
            break;
        }
    }
    
    if (pos == -1) {
        return "";
    } else {
        return string(1, word[pos]);
    }
}