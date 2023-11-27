#include <iostream>
#include <string>
#include <cassert>

int myStrLen(std::string str) {
    return str.length();
}

int main() {
    assert(myStrLen("asdasnakj") == 9);
    // other test cases...
    
    return 0;
}