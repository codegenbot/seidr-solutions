#include <cstring>

// Task: Implement a function that returns the length of a given C-style string.
int strlen(const char* str) {
    return ::strlen(str);
}

int main(){
    assert(strlen("asdasnakj") == 9);
    return strlen("asdasnakj");
}