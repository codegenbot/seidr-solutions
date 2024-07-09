#include <string>

int myStrlen(const std::string& str) {
    int len = 0;
    while (len < str.length()) {
        len++;
    }
    return len;
}