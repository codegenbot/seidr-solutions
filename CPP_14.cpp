#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(const std::string &str) {
    std::vector<std::string> result;
    for (size_t i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    std::cout << "Test passed." << std::endl;
    return 0;
}