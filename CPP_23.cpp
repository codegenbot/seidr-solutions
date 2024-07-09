#include <cassert>
#include <cstring>

int myStrlen(const char* str){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    assert(myStrlen("asdasnakj") == 10);
}