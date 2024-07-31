#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf() {
    return std::vector<std::string>{"Some", "output"};
}

int main() {
    assert(issame(bf(), std::vector<std::string>{}));
    return 0;
}