#include <iostream>
#include <string>
#include <cassert>

int my_strlen(const std::string& str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 9);
    assert(my_strlen("") == 0);
    assert(my_strlen("hello") == 5);
    assert(my_strlen("1234567890") == 10);
    assert(my_strlen("abcdefg") == 7);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}