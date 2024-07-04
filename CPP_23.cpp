#include <iostream>
#include <string>
#include <cassert>

size_t getStringLength(const std::string& str) {
    return str.length();
}

void testGetStringLength() {
    assert(getStringLength("asdasnakj") == 9);
}

int main() {
    testGetStringLength();
    std::cout << "Test passed!" << std::endl;
    return 0;
}