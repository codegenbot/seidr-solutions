#include <string>
#include <cstring>

int length(const std::string& str) {
    return str.length();
}

int test_length() {
    assert(length("asdasnakj") == 13);
}