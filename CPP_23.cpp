#include <string>
#include <cassert>

int strLength(const std::string& str) {
    return str.length();
}

int main() {
    assert(strLength("asdasnakj") == 11);
    return 0;
}