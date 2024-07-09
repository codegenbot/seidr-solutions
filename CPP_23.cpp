```
#include <cassert>
#include <cstring>

int length(const std::string& str) {
    return str.length();
}

int main() {
    assert(length("asdasnakj") == 11);
}