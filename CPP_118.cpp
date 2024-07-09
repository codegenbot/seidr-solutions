Here is the solution:

string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-2; i>=1; --i){
        if(isvowel(word[i])){
            return string(1,word[i]);
        }
    }
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}