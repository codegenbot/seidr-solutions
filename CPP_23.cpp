#include <iostream>
#include <cassert>
#include <cstring>

int main() {
    std::string str;
    std::cin >> str;
    std::cout << str.length();
    
    assert(strlen("asdasnakj") == 9);

    return 0;
}