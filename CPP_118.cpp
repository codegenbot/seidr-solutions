char* findPunctuation(char* word) {
    for (int i = 0; i < strlen(word); i++) {
        if (ispunct(word[i])) return &word[i];
    }
    return NULL;
}