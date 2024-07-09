string get_closest_vowel(string word) {
    int left = 0;
    for(int i = word.size() - 1; i >= 0; i--) {
        if(!isvowel(word[i])) {
            left = i + 1;
            break;
        }
    }

    for(int i = left; i < word.size(); i++) {
        if(isvowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }

    return "";
}

bool isvowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}