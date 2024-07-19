#include <iostream>
#include <cassert>
#include <cstring>
#include <string>

int customStringLength(const char* str) {
    return strlen(str);
}

int main() {
    assert(customStringLength("asdasnakj") == 9);
    std::string str = "Hello, World!";
    return str.length();
}