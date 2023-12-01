#include <string>
#include <iostream>
#include <cassert>
#include <cstring>

int calculateLength(const std::string& str){
    return str.length();
}

int main() {
    assert(calculateLength("asdasnakj") == strlen("asdasnakj"));
    // your code here
    return 0;
}