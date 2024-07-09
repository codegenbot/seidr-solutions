```cpp
#include <iostream>
#include <string>

int custom_strlen(std::string str) {
    return str.length();
}

int main() {
    assert(custom_strlen("asdasnakj") == 11); 
    std::cout << "Hello, World!" << std::endl;
    return 0;
}