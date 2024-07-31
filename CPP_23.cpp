```cpp
#include <string>

int my_strlen(const char *str){
    int len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}

int main() {
    const char* input = "asdasnakj";
    assert(my_strlen(input) == 12);
}