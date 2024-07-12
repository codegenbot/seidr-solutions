bool is_nested(const char* str) {
    int count = 0;
    for (int i = 0; str[i]; ++i) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']') {
            if (count > 0) {
                count--;
            }
        }
    }
    return count != 0;
}