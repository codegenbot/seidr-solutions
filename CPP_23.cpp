#include <string>
#include <cstring>

int main() {
    std::string str = "asdasnakj";
    assert(strlen(str.c_str()) == 9); // comparing C-string length
    return str.length();
}