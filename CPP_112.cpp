#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using string = std::string;

bool issame(const std::vector<string>& a, const std::vector<string>& b) {
    return a == b;
}

std::vector<string> reverse_delete(const string& s, const string& c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}