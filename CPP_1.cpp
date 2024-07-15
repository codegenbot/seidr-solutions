#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    // Implement separate_paren_groups function
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}