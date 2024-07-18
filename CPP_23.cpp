#include <iostream>
#include <cstring>
#include <cassert>

int main() {
    std::string str = "asdasnakj";
    assert(strlen(str.c_str()) == 9);
}