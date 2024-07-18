#include <iostream>
#include <cassert>
#include <cstring> // Add this line for strlen function
#include <string>

int main() {
    std::string str = "asdasnakj";
    assert(str.length() == 9); // To compare the length of string

    assert(strlen("asdasnakj") == 9); // To compare the length of C-style string
}