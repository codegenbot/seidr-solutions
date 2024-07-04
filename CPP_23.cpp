#include <iostream>
#include <string>
#include <cassert>

int myStrlen(const std::string& str) {
    return str.length();
}

int main() {
    assert(myStrlen("asdasnakj") == 9);
    return 0;
}