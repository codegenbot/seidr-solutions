```
#include <algorithm>
#include <string>

std::string filp_case(const std::string& str) {
    for (auto i = 0; i < str.length(); ++i) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}