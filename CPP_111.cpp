#include <iostream>
#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string test) {
    // Existing function implementation
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}