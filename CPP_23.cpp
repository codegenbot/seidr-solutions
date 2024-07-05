#include <iostream>
#include <cassert>
#include <string>

int custom_strlen(const std::string& str) {
    return str.length();
}

int main() {
    assert(custom_strlen("asdasnakj") == 9);
    std::cout << "Test passed!" << std::endl;
    return 0;
}