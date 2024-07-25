string get_closest_vowel(string word) {
    int n = word.size();
    string result = "";
    
    for(int i = n - 1; i > 0; --i){
        if(!isalpha(word[i])){
            break;
        }
        if(isvowel(word[i])){
            result = word[i];
            return result;
        }
    }
    
    return result;
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}