#include <string>
using namespace std;

std::basic_string<char> solve(std::basic_string<char> s) {
    std::basic_string<char> result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::basic_string<char>(s).reverse() : result;