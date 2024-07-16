#include <iostream>
#include <string>
#include <cstring>
#include <cassert>

int countCharacters(const std::string& str) {
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 9);
    // additional test cases or logic can be added here
    return 0;
}