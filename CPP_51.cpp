```cpp
#include <string>
#include <cctype>

std::string remove_vowels(std::string text) {
    for (auto it = text.begin(); it != text.end();) {
        if (std::toupper(*it) == 'A' || std::toupper(*it) == 'E' 
            || std::toupper(*it) == 'I' || std::toupper(*it) == 'O' || std::toupper(*it) == 'U') {
            it = text.erase(it, it+1);
        } else {
            ++it;
        }
    }
    return text;
}