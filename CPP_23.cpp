#include <iostream>
#include <cassert>
#include <cstring>

int main() {
    std::string str = "asdasnakj";
    assert(strlen(str.c_str()) == 9);
}