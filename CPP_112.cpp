#include <algorithm>
#include <string>

std::pair<std::string, std::string> checkPalindromeAndRemoveChars(const std::string& s, const std::string& c) {
    std::string str = s;
    for (char ch : c) {
        str.erase(std::remove(str.begin(), str.end(), ch), str.end());
    }

    std::string result = str;
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}