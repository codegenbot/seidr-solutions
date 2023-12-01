#include <cstring>
#include <cassert>
#include <string>
#include <iostream>

int calculateLength(std::string str){
    return str.length();
}

int main() {
    assert(calculateLength("asdasnakj") == std::strlen("asdasnakj"));
    // your code here
    return 0;
}