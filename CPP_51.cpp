```cpp
#include <string>
#include <cctype>
#include <cassert>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!std::iscntrl(c) && !std::isalpha(c) || !std::strncasecmp(&c, "aeiouAEIOU", 1)) {
            continue;
        }
        result += c;
    }
    return result;
}