#include <iostream>
#include <cstring>

int main() {
    std::string str;
    std::cin >> str;
    std::cout << str.length();
    assert(strlen(str.c_str()) == 9);
    return 0;
}