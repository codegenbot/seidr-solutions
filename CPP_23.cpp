```cpp
#include <assert.h>
#include <cstring>
#include <string>

int str_length(const char* str) {
    return std::strlen(str);
}

int main() {
    assert (str_length("asdasnakj") == 11); 
    return 0;
}