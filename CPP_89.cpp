```cpp
#include <string>
std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char newC = (c - 'a' + 2 * 26) % 26 + 'a';
            result += newC;
        } else if (c >= 'A' && c <= 'Z') {
            char newC = (c - 'A' + 2 * 26) % 26 + 'A';
            result += newC;
        } else {
            result += c;
        }
    }
    return result;
}