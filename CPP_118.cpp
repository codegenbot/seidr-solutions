string get_closest_vowel(string word) {
    int start = 0;
    while(start < word.size() && !isVowel(word[start]))
        start++;
    
    for(int i = word.size() - 1; i >= 0; i--) {
        if(!isVowel(word[i])) {
            if(i + 1 < word.size()) {
                if(isVowel(word[i + 1]))
                    return string(1, tolower(word[i + 1]));
            }
        } else
            break;
    }
    
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}