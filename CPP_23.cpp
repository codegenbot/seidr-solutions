#include <assert.h>
#include <cstring>
#include <string>

int std::str_length(std::string str) {
    return str.length();
}

int main() {
    assert (std::strlen("asdasnakj") == 9);
    return 0;
}