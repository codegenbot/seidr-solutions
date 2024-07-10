string get_closest_vowel(string word){
    for(int i = word.length() - 1; i >= 2; --i){
        if(isvowel(word[i])){
            for(int j = i-1; j >= 0; --j){
                if(!isvowel(word[j]) && !isconsonant(word[j]))
                    return "";
                if(isconsonant(word[j]))
                    break;
            }
            return word.substr(j+1, i-j);
        }
    }
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isconsonant(char c){
    c = tolower(c);
    return (!isalpha(c) ? false : !isvowel(c));
}