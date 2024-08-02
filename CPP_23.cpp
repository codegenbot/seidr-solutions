#include <cassert>
#include <cstring>

int main() {
    const char* str = "asdasnakj";
    int length = 0;
    for(int i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    assert(length == 9);

    return 0;
}