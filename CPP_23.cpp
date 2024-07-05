#include <string>
#include <cassert>

int custom_strlen(std::string str) {
    return str.length();
}

int main() {
    assert(custom_strlen("asdasnakj") == 9);
    return 0;
}