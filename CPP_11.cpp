#include <string>

char* string_xor(char* a, char* b) {
    int len1 = strlen(a);
    int len2 = (b)?strlen(b):0;
    char* result = new char[len1+1];
    for(int i = 0; i < len1; i++) {
        char c1 = a[i];
        char c2 = (i < len2)?b[i]:'0';
        if(c1 == '0' && c2 == '0')
            result[i] = '0';
        else if(c1 == '0' || c2 == '0')
            result[i] = '1';
        else
            result[i] = '0';
    }
    result[len1] = '\0';
    return result;
}