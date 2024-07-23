#include <string>

char* string_xor(char* a, char* b) {
    int len = strlen(a);
    int resultLen = len;
    char* result = (char*)malloc((resultLen + 1)*sizeof(char));
    result[resultLen] = '\0';
    
    for(int i = 0; i < len; i++) {
        char c1 = a[i];
        char c2 = (i < strlen(b)) ? b[i] : '0';
        if(c1 == '0' && c2 == '0')
            result[i] = '0';
        else if(c1 == '0' || c2 == '0')
            result[i] = '1';
        else
            result[i] = '0';
    }
    
    return result;
}