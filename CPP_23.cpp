```cpp
#include <cassert>
#include <string>
#include <cstring>

int myStrlen(const char* str){
    return strlen(str);
}

int main() {
    assert(myStrlen("asdasnakj") == 10);
}