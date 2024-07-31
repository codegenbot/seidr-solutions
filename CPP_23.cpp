```cpp
#include <string>
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

int main() {
    assert(my_strlen("asdasnakj") == 12);
}