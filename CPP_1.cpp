#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Implement the comparison logic here
    return a == b;
}

int main() {
    // Add your test cases here
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}