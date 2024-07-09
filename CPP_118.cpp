string get_closest_vowel(string word) {
    for(int i = word.length() - 2; i >= 1; --i) {
        if(isvowel(word[i])) {
            string::iterator it = upper_bound(word.begin(), word.end(), word[i]);
            if(it == word.end()) return string(1, tolower(word[i]));
            else return string(1, tolower(*it));
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}