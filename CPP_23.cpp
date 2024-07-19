#include <iostream>
#include <cassert>
#include <cstring>

int customStringLength(const char* str) {
    return strlen(str);
}

int main() {
    assert(customStringLength("asdasnakj") == 9);
    assert(customStringLength("asdas  asnakj") == 13);
}