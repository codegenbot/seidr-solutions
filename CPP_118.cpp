string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i >= 0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U') {
            for(int j = i - 1; j >= 0; j--) {
                if(!isVowel(word[j])) {
                    return (word[i] == 'a' || word[i] == 'A') ? "a" : ((word[i] == 'e' || 
                                                                              word[i] == 'E') ? "e" : ((word[i] == 'i' || 
                                                                                                    word[i] == 'I') ? "i" : ((word[i] == 'o' || 
                                                                                                                        word[i] == 'O') ? "o" : "u")));
                }
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }
    return false;
}