#include <cstring>

int findStringLength(const std::string& str) {
    return std::strlen(str.c_str());
}

int main() {
    assert(strlen("asdasnakj") == 9);
}