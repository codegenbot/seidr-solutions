```cpp
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower(c);
            else
                result += toupper(c);
        } else
            result += c;
    }
    return result;
}