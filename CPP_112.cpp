#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());
    
    std::string filtered_s;
    for (const char& ch : reversed_s) {
        if (c.find(ch) == std::string::npos) {
            filtered_s += ch;
        }
    }
    
    return {filtered_s};
}

int main() {
    std::string input_s;
    std::string input_c;

    std::cout << "Enter string s: ";
    std::cin >> input_s;

    std::cout << "Enter characters to remove c: ";
    std::cin >> input_c;

    std::vector<std::string> result = reverse_delete(input_s, input_c);

    assert(issame(result, std::vector<std::string>{"", "True"}));

    for (const auto& str : result) {
        std::cout << str << " ";
    }

    return 0;
}