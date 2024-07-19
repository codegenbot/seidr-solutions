#include <cstring>

int calculateStringLength(const char* str) {
    return strlen(str);
}

int main() {
    assert(calculateStringLength("asdasnakj") == 9);
    return 0;
}