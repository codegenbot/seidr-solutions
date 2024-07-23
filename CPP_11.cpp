#include <string>

char* string_xor(char* a, char* b) {
    int i = 0;
    int len = strlen(a);
    int max_len = (len > strlen(b)) ? len : strlen(b);
    char* result = new char[max_len + 1];
    
    for(i = 0; i < max_len; i++) {
        if(i >= len)
            result[i] = b[i];
        else if(i >= strlen(b))
            result[i] = a[i];
        else
            result[i] = (a[i] == '0' && b[i] == '0') ? '0' : ((a[i] == '0' || b[i] == '0') ? '1' : '0');
    }
    
    for(i = 0; i <= max_len; i++) {
        result[max_len + i - 1] = '\0';
    }
    
    return result;
}