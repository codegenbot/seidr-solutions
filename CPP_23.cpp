#include <assert.h>
#include <cstring>

int str_len(const std::string& str) {
    return str.length();
}

int main() {
    assert(str_len("asdasnakj") == 12); 
    return 0;
}