#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string s = a[0] + b[0];
    std::string c = a[1] + b[1];
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    return {result, result == std::string(result.rbegin(), result.rend()) ? "True" : "False"};
}

int main() {
    assert(issame({"mamma", "mia"}, {"", "True"}) == std::vector<std::string>{"mm", "False"});
    return 0;
}