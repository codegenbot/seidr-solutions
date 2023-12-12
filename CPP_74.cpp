
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& a, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare(b[i]) != 0) {
            return false;
        }
    }
    return true;
}

std::basic_string<char, std::char_traits<char>, std::allocator<char>> totalMatch(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& a, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& b) {
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(b[i]);
        }
    }
    return result;
}

int main() {
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> a = {"this"};
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> b = {"that"};
    assert(issame(totalMatch({"this"}, {"that"}), {}));
}