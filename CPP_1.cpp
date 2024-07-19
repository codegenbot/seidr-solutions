#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    // Implement function to separate parenthesis groups and return as vector
}

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(isSame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}