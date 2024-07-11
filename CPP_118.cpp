string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; --i) {
        if(vowels.find(toupper(word[i])) != string::npos) {
            for(int j = i - 1; j >= 0; --j) {
                if(!isvowel(toupper(word[j]))) break;
            }
            return word.substr(j + 1, i - j - 1);
        }
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}