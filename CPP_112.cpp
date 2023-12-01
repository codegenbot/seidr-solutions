#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c);

int main() {
    assert(reverse_delete("mamma", "mia") == std::vector<std::string>{"", "True"});
    return 0;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
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