#include <cstring>
#include <string>

int strLength(const char* str) {
    return std::string(str).length();
}

int testMain() {
    assert(strLength("asdasnakj") == 13);
    return 0;
}