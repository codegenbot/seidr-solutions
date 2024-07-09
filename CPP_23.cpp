#include <string>
#include <cstring>
#include <cassert>

int myStringLen(const char* str) {
    return std::string(str).length();
}

int main() {
    assert(myStringLen("asdasnakj") == 11);
    return 0;
}