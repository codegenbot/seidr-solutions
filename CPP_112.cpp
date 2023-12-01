#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
bool issame(const T& a, const T& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == std::string::npos) {
            result += s[i];
        }
    }
    std::string reversed_result = result;
    std::reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);
    return std::vector<std::string>{result, (is_palindrome ? "True" : "False")};
}

int main() {
    if (issame(reverse_delete("mamma", "mia"), std::vector<std::string>{"", "True"})) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }

    return 0;
}