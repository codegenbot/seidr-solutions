```cpp
#include <string>
#include <assert.h>

int str_length(string str) {
    return str.length();
}

int main() {
    assert(str_length("asdasnakj") == 11);
    return 0;
}