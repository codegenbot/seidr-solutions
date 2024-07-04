#include <iostream>
#include <string>
#include <cassert>

int myStrlen(std::string str) {
    return str.length();
}

int main() {
    assert(myStrlen("asdasnakj") == 9);
    std::cout << "Test passed!" << std::endl;
    return 0;
}