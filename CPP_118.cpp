string get_closest_vowel(string word){
    for(int i = word.size() - 1; i > 0; --i){
        if(vowel(word[i])){
            int j;
            for(j = i - 1; j >= 0 && !vowel(word[j]); --j);
            return word.substr(j + 1, i - j - 1);
        }
    }
    return "";
}

bool vowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}