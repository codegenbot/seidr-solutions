#include <cstring>

int str_len(const std::string& str) {
    return str.length();
}

void main() {
    assert(std::strlen("asdasnakj") == 9);
}