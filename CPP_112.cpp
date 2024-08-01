#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::string& a, const std::string& b) {
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

    return {result, issame(result, reversed) ? "True" : "False"};
}

int main() {
    std::vector<std::string> expected = {"", "True"};
    std::vector<std::string> output = reverse_delete("mamma", "mia");

    assert(output == expected);
    return 0;
}