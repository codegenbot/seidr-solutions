```cpp
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>

int my_strlen(const char* str) {
    if(str == nullptr)
        return -1;
    int length = 0;
    while(*str != '\0')
        ++length, ++str;
    return length;
}

int main() {
    assert(my_strlen("asdasnakj") == 13);
    std::cout << "The length of 'asdasnakj' is: " << my_strlen("asdasnakj") << "\n";
    return 0;
}