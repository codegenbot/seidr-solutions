```cpp
#include <iostream>
#include <string>
#include <cassert>

int my_strlen(std::string str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 13);
    std::cout << "The length of 'asdasnakj' is: " << my_strlen("asdasnakj") << "\n";
    return 0;
}