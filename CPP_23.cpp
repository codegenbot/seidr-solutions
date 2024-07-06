```cpp
#include <string>
#include <assert.h>
#include <cstring>

int str_length(string str) {
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 9);
}