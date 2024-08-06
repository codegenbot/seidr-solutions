#include <cstring>

int calculateStringLength(const std::string& str) {
    return str.length();
}

int main() {
    assert(calculateStringLength("asdasnakj") == 9);
    return 0;
}