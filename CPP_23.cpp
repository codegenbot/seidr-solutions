#include <iostream>
#include <string>

int my_strlen(const std::string& str) {
    return str.length();
}

int main() {
    std::cout << (my_strlen("asdasnakj") == 9) << std::endl;
    return 0;
}