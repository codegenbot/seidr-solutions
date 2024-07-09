#include <string>
#include <cassert>

int my_length(std::string str) {
    return str.length();
}

assert(my_length("asdasnakj") == 12);