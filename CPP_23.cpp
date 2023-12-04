
#include <iostream>
#include <string>

int strlen(const std::string& str) {
    return str.length();
}

assert (strlen(std::string("asdasnakj")) == 9);