```cpp
#include <iostream>
using namespace std;

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result += ' ';
                    capitalizeNext = false;
                }
            } else {
                capitalizeNext = true;
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    if (!result.empty() && !capitalizeNext) {
        result[0] = tolower(result[0]);
    }

    return result;
}