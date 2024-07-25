int countChars(const char* str, char c) {
    int count = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}