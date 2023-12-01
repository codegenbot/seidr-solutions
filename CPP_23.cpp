#include <string>
#include <iostream>
#include <cassert>

int calculateLength(std::string str){
    return str.size();
}

int main() {
    assert(calculateLength("asdasnakj") == 9);
    return 0;
}