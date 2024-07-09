string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; --i) {
        if(vowel(word[i])) {
            int left = i;
            while(left > 0 && !consonant(word[left-1]))
                left--;
            return word.substr(left-1, i-left+1);
        }
    }
    return "";
}

bool vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool consonant(char c) {
    c = tolower(c);
    return (!vowel(c));
}