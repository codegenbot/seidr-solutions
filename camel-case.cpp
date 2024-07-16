#include <string>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) {
                char cTemp = s[static_cast<int>(s.find(c)) + 1];
                if (capitalizeNext) {
                    result += std::toupper(cTemp);
                } else {
                    result += std::tolower(cTemp);
                }
            }
            capitalizeNext = true;
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += c;
        }
    }

    return result;
}