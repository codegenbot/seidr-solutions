```cpp
#include <string>
#include <cstring>
#include <cassert>

int myStringLen(const std::string& str) {
    return str.length();
}

int main() {
    assert(myStringLen(std::string("asdasnakj")) == 11);
    return 0;
}