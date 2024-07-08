#include <iostream>
#include <string>
#include <cstring>
#include <cassert>

int my_strlen(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    std::cout << "The length of 'asdasnakj' is: " << my_strlen("asdasnakj") << "\n";
    assert(my_strlen("asdasnakj") == 13);
    return 0;
}