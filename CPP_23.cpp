#include <string>
#include <cassert>
#include <cstring>

int main() {
    assert(strlen("asdasnakj") == 9);
    std::string str = "example";
    assert(str.length() == 7);
    return str.length();
}