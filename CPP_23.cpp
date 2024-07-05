#include <iostream>
#include <cassert>
#include <string>

int my_strlen(const std::string& str) {
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 9);
    return 0;
}