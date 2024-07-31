#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> bf(const std::initializer_list<std::string>& args = {}) {
    return std::vector<std::string>(args);
}

int main() {
    assert(issame(bf({"Jupiter", "Makemake"}), {}));
    return 0;
}