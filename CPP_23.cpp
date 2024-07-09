#include <string>
#include <cstring>

int myStrlen(const std::string& str) {
    int len = 0;
    while (len < str.length()) {
        len++;
    }
    return len;
}

int main() {
    assert(myStrlen("asdasnakj") == 12);
    return 0;
}