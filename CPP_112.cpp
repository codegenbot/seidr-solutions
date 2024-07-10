#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::pair<std::string, std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}

bool issame(std::pair<std::string, std::string> a, std::pair<std::string, std::string> b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"})); 
    return 0;
}