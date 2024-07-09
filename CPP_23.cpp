#include <string>
#include <cstring>
#include <cassert>

int myStringLen(const std::string& str) {
    int len = 0;
    while (len < str.length()) {
        len++;
    }
    return len;
}

assert(myStringLen("asdasnakj") == 11);