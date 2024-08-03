#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result = {""};
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result[0] += ch;
        }
    }
    std::string result_reverse = result[0];
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result[0], issame(result, std::vector<std::string>{result_reverse}) ? "True" : "False"};
}