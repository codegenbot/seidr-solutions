#include <iostream>
#include <cstring> // Add this line to include the <cstring> header

int main() {
    std::string str;
    std::cin >> str;
    std::cout << str.length();
    assert(strlen(str.c_str()) == 9); // Use str.c_str() and remove the hardcoded string
    return 0;
}