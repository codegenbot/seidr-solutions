```c++
#include <string>
#include <cassert>
#include <cstring>

int my_strlen(std::string str) {
    return strlen(str.c_str());
}

int main() {
    assert(my_strlen("asdasnakj") == 12);
    return 0;
}