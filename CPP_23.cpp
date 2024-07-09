```
#include <string>
#include <cstring>

int myStringLen(const std::string& str) {
    int len = 0;
    while (len < str.length()) {
        len++;
    }
    return len;
}

int main() {
    assert(myStringLen("asdasnakj") == 11);
    return 0;
}