#include <string>
using namespace std;

std::pair<std::string, std::string> issame(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    return {result, result == reversed_result ? "True" : "False"};
}