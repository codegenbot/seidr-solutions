#include <iostream>
#include <cassert>
#include <cstring>
#include <string>

int main() {
    std::string str = "asdasnakj";
    assert(str.length() == 9); 
    assert(strlen("asdasnakj") == 9);
}