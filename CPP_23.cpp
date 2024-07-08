```cpp
#include <iostream>
#include <string>

int my_strlen(const char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    assert(my_strlen("asdasnakj") == 13);
    std::cout << "The length of 'asdasnakj' is: " << my_strlen("asdasnakj") << "\n";
    return 0;
}