#include <cstring>

// Task: Implement a function to return the length of a C-style string using strlen function.
int strLength(const char* str) {
    return strlen(str);
}

int main(){
    assert(strLength("asdasnakj") == 9);
    return strLength("asdasnakj");
}