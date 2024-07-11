#include <string>
#include <cassert>

int my_strlen(std::string str) {
    return str.length();
}

int test_my_strlen() {
    assert(my_strlen("asdasnakj") == 12);
    return 0;
}