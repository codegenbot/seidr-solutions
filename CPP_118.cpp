string get_closest_vowel(string word) {
    int i = word.size() - 1; // initialize i from right end of string
    
    while(i >= 0 && !isVowel(word[i])) {
        --i;
    }
    
    if(i < 0) return ""; // if no vowel found
        
    int j = i + 1; // initialize j to the right of closest vowel
    
    while(j < word.size() && !isConsonant(word[j])) {
        ++j;
    }
    
    for(int k = i - 1; k >= 0; --k) {
        if(isVowel(word[k])) {
            return string(1, word[k]);
        } else if (!isConsonant(word[k])) break;
    }
    
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isConsonant(char c) {
    c = tolower(c);
    return (!isVowel(c) && !isspace(c));
}