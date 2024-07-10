#include <iostream>
#include <string.h>

int main() {
    std::string str = "asdasnakj";
    std::cout << str.length() << std::endl;

    assert(strlen("asdasnakj") == 9);

    return 0;
}