#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, (result == reverse_result) ? "True" : "False"};
}

int main() {
    std::string input_s, input_c;
    std::cout << "Enter string s: ";
    std::cin >> input_s;
    std::cout << "Enter string c: ";
    std::cin >> input_c;

    std::vector<std::string> a = {"abc", "def"};
    std::vector<std::string> b = {"ghi", "jkl"};

    bool is_same = issame(a, b);
    std::cout << (is_same ? "True" : "False") << std::endl;

    std::vector<std::string> result = reverse_delete(input_s, input_c);
    for (const auto &res : result) {
        std::cout << res << std::endl;
    }

    return 0;
}