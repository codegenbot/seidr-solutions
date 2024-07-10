#include <cstring>

int strLength(const char* str) {
    return strlen(str);
}

int testMain() {
    assert(strLength("asdasnakj") == 13);
    return 0;
}