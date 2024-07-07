string get_closest_vowel(string word) {
    int n = word.length();
    for(int i = n-1; i > 0; --i){
        if(isvowel(word[i])){
            string::iterator it = upper_bound(word.begin(), word.end(), word[i]);
            int pos = distance(word.begin(), it);
            return word.substr(pos, 1);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}