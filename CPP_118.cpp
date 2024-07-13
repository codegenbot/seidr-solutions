string get_closest_vowel(string word){
    int n = word.size();
    string result = "";
    for(int i=n-1; i>=2; --i){
        if(isvowel(word[i])){
            if(!isvowel(word[i-1]) && !isvowel(word[i-2]))
                return word.substr(i, 1);
        }
    }
    return result;
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}