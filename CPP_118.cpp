```cpp
#include <cctype>
#include <string>

std::string ispunct(const std::string& word) {
    for (char c : word) {
        if (!std::isalnum(c)) {
            return std::string(1, c);
        }
    }
    return "";
}