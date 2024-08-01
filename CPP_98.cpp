#include <cctype>

int count_upper(const char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = std::toupper(s[i]);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}