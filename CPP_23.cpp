```cpp
#include <string>
#include <cassert>

int strLength(const std::string& str) {
    return str.length();
}

assert(strLength("asdasnakj") == 13);