#include <iostream>
#include <string>

int my_strlen(const char* str) {
    return static_cast<int>(std::string(str).length());
}

int main() {
    assert(my_strlen("asdasnakj") == 13);
    std::cout << "The length of 'asdasnakj' is: " << my_strlen("asdasnakj") << "\n";
    return 0;
}