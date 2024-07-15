#include <string>

int getStringLength(const std::string& str) {
    return str.length();
}

int main() {
    assert(getStringLength("asdasnakj") == 9);
    return 0;
}