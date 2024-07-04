#include <iostream>
#include <string>
#include <cassert>

int my_strlen(const std::string& str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 9);
    std::cout << my_strlen("Your input string here") << std::endl;
    return 0;
}