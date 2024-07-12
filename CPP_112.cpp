#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::std::string> reverse_delete(const std::std::string& s, const std::std::string& c) {
    std::std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::std::string::npos) {
            result += ch;
        }
    }
    std::std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}

bool issame(const std::vector<std::std::string>& a, const std::vector<std::std::string>& b) {
    return a == b;
}