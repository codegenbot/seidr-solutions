```
int str_len(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}