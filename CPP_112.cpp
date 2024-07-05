#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    for (char ch : c) {
        s.erase(std::remove(s.begin(), s.end(), ch), s.end());
    }
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());
    bool is_palindrome = (s == reversed_s);
    return {s, is_palindrome ? "True" : "False"};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert (issame(reverse_delete("mamma", "mia") , {"mm", "True"}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}