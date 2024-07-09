#include <string>

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(s).reverse() : result;
}