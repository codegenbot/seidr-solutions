char ispunct(char c);
string word;

char findPunctuation() {
    for (int i = 0; i < word.length(); i++) {
        if (ispunct(word[i])) return word[i];
    }
    for (int j = word.length() - 1; j >= 0; j--) {
        if (ispunct(word[j])) return word[j];
    }
    return '\0';
}