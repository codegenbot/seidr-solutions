#include <cstring>
#include <string>
#include <cassert>
#include <iostream>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    assert(str.length() == strlen("asdasnakj"));

    return str.length();
}