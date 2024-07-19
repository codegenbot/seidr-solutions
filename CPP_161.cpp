#include <string>
#include <algorithm>

std::result_type solve(std::string input) {
    std::result_type result = "";
    for (char c : input) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(input).reverse() : result;
}