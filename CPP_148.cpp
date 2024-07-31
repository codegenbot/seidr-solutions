#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

std::vector<std::string> bf(const std::string &a, const std::string &b) {
    // Implement the logic for bf function here
    return std::vector<std::string>();
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), std::vector<std::string>()));
    return 0;
}