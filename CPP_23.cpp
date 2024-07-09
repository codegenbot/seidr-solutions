#include <string>
#include <cassert>
#include <cstring>

int length(const std::string& str) {
    return str.length();
}

int main() {
    assert(length(std::string("asdasnakj")) == 13);
}