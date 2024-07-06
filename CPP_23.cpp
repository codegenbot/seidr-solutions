#include <string>
#include <assert.h>

int str_length(const char* str) {
    return strlen(str);
}

int main() {
    assert (str_length("asdasnakj") == 12); 
    return 0;
}