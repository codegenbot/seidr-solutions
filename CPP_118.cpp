string get_closest_vowel(string word) {
    int left = 0;
    for(int i = word.size() - 1; i >= 0; i--) {
        if(!isVowel(word[i])) {
            left = i + 1;
            break;
        }
    }

    for(int i = left; i < word.size(); i++) {
        if(isVowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }

    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}