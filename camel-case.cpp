#include <string>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) result += toupper(s.substr(static_cast<int>(s.find(c))+1, 1)); 
            capitalizeNext = true;
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result.erase(result.find_last_not_of(" ")+1);  // remove trailing space
}