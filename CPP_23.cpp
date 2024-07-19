#include <cassert>
#include <cstring>

int main() {
    const char* str = "asdasnakj";
    assert(strlen(str) == 9);

    str = "updated";
    assert(strlen(str) == 7);
    
    return strlen(str);
}