#include <cctype>
#include <cstddef>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) result += std::toupper(c);
            capitalizeNext = true;
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    size_t pos = 0;
    while ((pos = result.find(' ')) != std::string::npos) {
        if(capitalizeNext) result[0] = std::toupper(result[0]);
        capitalizeNext = false;
        result.erase(pos, 1);
    }
    
    if (capitalizeNext) {
        result[0] = std::toupper(result[0]);
    }

    return 0;
}