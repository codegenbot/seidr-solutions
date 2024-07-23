#include <cstring>

int str_len(const std::string& str) {
    return str.length();
}

int main() {
    assert(std::strlen("asdasnakj") == 9);
    return 0;
}