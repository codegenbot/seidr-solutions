string get_closest_vowel(string word) {
    int n = word.length();
    for(int i = n - 1; i > 0; --i) {
        if(isvowel(word[i])) {
            char left = word[i-1];
            while(i > 1 && !isconsonant(left)) {
                --i;
                left = word[i-1];
            }
            return (isconsonant(left)) ? string(1, word[i]) : "";
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isconsonant(char c) {
    c = tolower(c);
    return (!isvowel(c));
}