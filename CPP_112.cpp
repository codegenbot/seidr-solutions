#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> reverse_delete(std::vector<std::string> a, std::vector<std::string> b) {
    std::string result = "";
    for (char ch : a[0]) {
        if (b[0].find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}