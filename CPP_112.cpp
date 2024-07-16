#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}

assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));