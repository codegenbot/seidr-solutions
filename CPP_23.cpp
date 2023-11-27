#include <string>
#include <cassert>

int stringLength(const std::string& str) {
    return str.size();
}

int main() {
    assert(stringLength("asdasnakj") == 9);
    return 0;
}