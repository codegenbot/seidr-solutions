#include <string>
#include <iostream>

int calculateLength(std::string str){
    return str.length();
}

int main() {
    assert(calculateLength("asdasnakj") == 9);
    return 0;
}