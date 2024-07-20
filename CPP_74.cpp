#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

bool total_match(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return issame(a, b);
}

int main() {
    assert(issame(std::vector<std::string>{"this"}, std::vector<std::string>{}) == false);

    return 0;
}