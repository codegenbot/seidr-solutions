string get_closest_vowel(string word) {
    int left = 0;
    for (int i = 0; i < word.size(); ++i) {
        if (!isvowel(word[i])) {
            left = i + 1;
        } else {
            break;
        }
    }
    
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) {
            return word.substr(left, i - left + 1);
        }
    }
    
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}