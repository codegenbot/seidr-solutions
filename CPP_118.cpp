string get_closest_vowel(string word) {
    string result = "";
    for(int i = word.size() - 1; i > 0; --i) {
        if(!isalpha(word[i])) continue;
        if(vowel(word[i])) {
            result = word.substr(i, 1);
            break;
        }
    }
    return result;
}

bool vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}