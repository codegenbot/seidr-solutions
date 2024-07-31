#include <iostream>
#include <cstring>

int main() {
    std::string str;
    std::cin >> str;
    int expected_length = 9;
    std::cout << (str.length() == expected_length);
    return 0;
}