```cpp
#include <string>
#include <cctype>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!std::string("aeiouAEIOU").find(std::tolower(c))) {
            continue;
        }
        result += tolower(c);
    }
    return result;
}