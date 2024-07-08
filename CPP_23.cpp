#include <iostream>
#include <string>
#include <cstring>
#include <cassert>

int my_strlen(std::string str) {
    return str.length();
}

int main() {
    assert(my_strlen(std::string("asdasnakj")) == 13);
    std::cout << "The length of 'asdasnakj' is: " << my_strlen(std::string("asdasnakj")) << "\n";
    return 0;