#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> reverse_delete_task(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}

int main() {
    std::string s, c;
    std::cin >> s >> c;
    std::vector<std::string> output = reverse_delete_task(s, c);
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    return 0;
}