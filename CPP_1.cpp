#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(isSame({"()", "(())", "(()())"}, {"()", "(())", "(()())"}));
    return 0;
}