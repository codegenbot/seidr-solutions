#include <cstring>

int main() {
    assert(strlen("asdasnakj") == 9);
    std::string str = "asdasnakj";
    return strlen(str.c_str());
}