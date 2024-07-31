
#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::string, std::string> reverse_delete(const std::string &s, const std::string &c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string rev_result = result;
    std::reverse(rev_result.begin(), rev_result.end());
    return {result, result == rev_result ? "True" : "False"};
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}