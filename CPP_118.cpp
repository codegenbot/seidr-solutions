string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>=1; --i) {
        if(isvowel(word[i])) {
            for(int j=i-1; j>=0; --j) {
                if(!isvowel(word[j]) && !isconsonant(word[j]))
                    break;
                if(j==0 || !isconsonant(word[j]))
                    return string(1, word[i]);
            }
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