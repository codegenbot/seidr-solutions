```cpp
#include <string>
#include <algorithm>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(s).substr(0, s.size()) + std::string(s.begin(), s.end()[::-1]) : result;