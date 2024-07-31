#include <iostream>
#include <cstring>

int main() {
    std::string str;
    std::cin >> str;
    std::cout << strlen(str.c_str());
    return 0;
}