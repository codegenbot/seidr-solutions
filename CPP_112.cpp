#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result;
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());

    return {result, result == reversed ? "True" : "False"};
}

int main() {
    assert(reverse_delete("mamma", "mia") == std::vector<std::string>{"", "True"});
    return 0;
}