#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::std::vector<std::std::string> a, std::std::vector<std::std::string> b) {
    return a == b;
}

std::std::vector<std::std::string> reverse_delete(std::std::string s, std::std::string c) {
    std::std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::std::string::npos) {
            result += ch;
        }
    }
    std::std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}

int solveProblem() {
    assert(issame(reverse_delete("mamma", "mia"), std::std::vector<std::std::string>{"mm", "False"}));
    return 0;
}