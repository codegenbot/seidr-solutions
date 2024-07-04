#include <iostream>
#include <string>
#include <cassert>

int getStringLength(const std::string &str) {
    return str.length();
}

int main() {
    assert(getStringLength("asdasnakj") == 9);
    std::cout << "Test passed!" << std::endl;
    return 0;
}