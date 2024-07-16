#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) {
                int start = s.find(c);
                result += toupper(s.substr(start+1, 0));
                capitalizeNext = true;
            } else {
                result += ' ';
                capitalizeNext = true;
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}