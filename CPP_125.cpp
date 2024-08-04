#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(const std::string& str) {
    // Implement the split_words function
}

bool assert_equal(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert_equal(split_words(""), std::vector<std::string>{"0"});

    return 0;
}