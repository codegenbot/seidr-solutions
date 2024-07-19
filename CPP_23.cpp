#include <string>
#include <cassert>
#include <cstring>

int strlen(std::string str) {
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 12);
    return 0;
}