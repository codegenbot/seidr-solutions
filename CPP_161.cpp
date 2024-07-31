#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += toupper(islower(c))? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result;