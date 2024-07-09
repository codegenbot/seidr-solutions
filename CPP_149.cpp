#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}