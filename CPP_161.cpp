#include <string>
#include <cctype>

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : std::tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(s).reverse() : result;
}