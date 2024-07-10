#include <string>
#include <cassert>
#include <cstring>

int strLength(const std::string& str) {
    return strlen(str.c_str());
}

int main() {
    assert(strLength("asdasnakj") == 13);
}