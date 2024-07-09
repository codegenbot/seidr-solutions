#include <string>
#include <cassert>

int customStringLength(std::string str) {
    return str.length();
}

int main() {
    assert(customStringLength("asdasnakj") == 9);
    return 0;
}