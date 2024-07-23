```cpp
#include <string>

std::string camelCase(std::string str) {
    std::string result;
    bool nextCapital = true;

    for (char c : str) {
        if (c == '-') {
            nextCapital = true;
        } else if (nextCapital) {
            result += toupper(c);
            nextCapital = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}