#include <iostream>
#include <cstring>

int main() {
    std::string str;
    std::cin >> str;
    std::cout << str.length();

    // Task: Check the length of a string constant
    assert(strlen("asdasnakj") == 9);

    return 0;
}