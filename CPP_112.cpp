#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::vector<std::string> result;
    // Your logic for reversing and deleting characters goes here
    return result;
}

int main() {
    std::string input_s;
    std::string input_c;

    std::cout << "Enter string s: ";
    std::cin >> input_s;

    std::cout << "Enter characters to remove c: ";
    std::cin >> input_c;

    std::vector<std::string> result = reverse_delete(input_s, input_c);

    for (const auto& str : result) {
        std::cout << str << " ";
    }

    assert(issame("hello", "hello"));
    assert(!issame("world", "earth"));

    return 0;
}