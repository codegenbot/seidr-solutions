#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string a, std::string b) {
    std::vector<std::string> result;
    // Logic here
    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), std::vector<std::string>()));
    return 0;
}