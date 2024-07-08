#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Example test case
    assert(issame({"()", "(())", "(()())"}, {"()", "(())", "(()())"}));

    return 0;
}