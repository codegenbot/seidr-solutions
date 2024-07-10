#include <string>
#include <iostream>

int strLength(const std::string& str) {
    return str.length();
}

int main() {
    assert(strLength(std::string("asdasnakj")) == 13);
    return 0;
}