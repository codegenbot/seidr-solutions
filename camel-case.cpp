```cpp
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) result += std::toupper(s[static_cast<int>(s.find(c))+1]); 
            capitalizeNext = true;
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += c;
        }
    }

    // Remove extra space
    size_t pos = result.find(' ');
    while (pos != std::string::npos) {
        result.erase(pos, 1);
        pos = result.find(' ');
    }

    return result;
}