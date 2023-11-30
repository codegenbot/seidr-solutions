#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == std::string::npos) {
            result += s[i];
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {result, (isPalindrome ? "True" : "False")};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    return 0;
}