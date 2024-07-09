#include <cstring>
#include <assert.h>

int myStrlen(const std::string& str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    assert(myStrlen("asdasnakj") == 11);
    return 0;
}