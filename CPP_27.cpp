```cpp
#include <string>
#include <cctype>

std::string flip_case(const std::string& s) {
    std::string result = "";
    for (char c : s) { 
        if (std::isupper(c)) {
            result += std::tolower(c);
        } else if (std::islower(c)) {
            result += std::toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}