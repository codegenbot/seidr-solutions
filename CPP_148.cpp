#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string a, std::string b) {
    std::vector<std::string> result;
    result.push_back(a);
    result.push_back(b);
    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), std::vector<std::string>{"Jupiter", "Makemake"}));
    return 0;
}