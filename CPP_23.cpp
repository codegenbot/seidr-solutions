#include <cstring>

int countVowels(const char* str) {
    int count = 0;
    int len = strlen(str);
    
    for (int i = 0; i < len; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    
    return count;
}