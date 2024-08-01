#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result;
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());

    return {result, issame(std::vector<std::string>{result, issame(result, reversed) ? "True" : "False"}, std::vector<std::string>{"", "True"}) ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), std::vector<std::string>{"", "True"}));
    return 0;
}