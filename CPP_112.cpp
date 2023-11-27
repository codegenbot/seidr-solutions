#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>

std::vector<std::string> reverse_delete(std::string s, std::string c);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
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
    std::vector<std::string> output;
    output.push_back(result);
    output.push_back(isPalindrome ? "True" : "False");
    return output;
}