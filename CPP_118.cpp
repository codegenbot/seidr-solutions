string get_closest_vowel(string word){
    int i = 0;
    while(i < word.size() && !isVowel(word[i])) i++;
    
    if(i == word.size()) return "";
    
    for(int j = i; j < word.size(); j++){
        if(!isVowel(word[j])){
            i = j;
            while(i < word.size() && !isVowel(word[i])) i++;
            if(isVowel(word[i-1])) return string(1, word[i-1]);
        }
    }
    
    return "";
}

bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}