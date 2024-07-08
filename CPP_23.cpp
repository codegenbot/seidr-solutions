#include <assert.h>
#include <cstring>

int my_strlen(std::string str) {
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 9);
}