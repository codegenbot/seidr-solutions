#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c);

bool is_same(std::vector<std::string> a, std::vector<std::string> b);

int main() {
    assert (is_same(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == std::string::npos) {
            result += s[i];
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    bool is_palindrome = (result == reverse_result);
    std::vector<std::string> output;
    output.push_back(result);
    output.push_back(is_palindrome ? "True" : "False");
    return output;
}

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}