#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>

std::vector<std::string> reverse_delete(std::string s, std::string c);

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

int main() {
    std::vector<std::string> expected = {"", "True"};
    std::vector<std::string> result = reverse_delete("mamma", "mai");
    if (expected == result) {
        std::cout << "Test case passed." << std::endl;
    } else {
        std::cout << "Test case failed." << std::endl;
    }
    return 0;
}