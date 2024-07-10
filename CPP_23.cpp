```cpp
#include <string>
#include <cassert>
#include <cstring>

int strLength(const char* str) {
    return std::string(str).length();
}

int main() {
    assert(std::string("asdasnakj").length() == 13);
    return 0;
}