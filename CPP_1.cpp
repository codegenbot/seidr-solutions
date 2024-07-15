#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<std::string>{"()", "(())", "(()())"}, separate_paren_groups("( ) (( )) (( )( ))")));
    return 0;
}