#include <iostream>
#include <string>

int strLength(const std::string& str) {
    return str.length();
}

int main() {
    assert(strLength("asdasnakj") == 12); 
    return 0;
}