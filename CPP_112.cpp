#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string s = a[0] + b[0];
    std::string c = a[1] + b[1];
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    return result == std::string(result.rbegin(), result.rend());
}

int main() {
    assert(issame({"mamma", "mia"}, {"", "True"}) == false);
    return 0;
}