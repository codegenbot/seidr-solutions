#include <cassert>
#include <cstring>

int my_strlen(const char* str){
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void testMy_strlen() {
    const char input[] = "asdasnakj";
    assert(my_strlen(input) == 11);
}