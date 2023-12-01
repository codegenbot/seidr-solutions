#include <iostream>
#include <string>

int stringLength(std::string str){
    return str.length();
}

int main() {
    assert(stringLength("asdasnakj") == 9);
    // Add more test cases if needed
    return 0;
}