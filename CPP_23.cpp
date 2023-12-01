#include <string>
#include <cassert>
#include <cstring>
#include <iostream>

int calculateLength(char* str){
    return strlen(str);
}

int main() {
    assert(calculateLength("asdasnakj") == strlen("asdasnakj"));
    // your code here
    return 0;
}