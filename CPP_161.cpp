#include <string>
#include <algorithm>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'
                ? toupper(c)
                : tolower(c);
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        std::reverse(result.begin(), result.end());
    }
    return result;
}