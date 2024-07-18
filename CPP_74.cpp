#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.empty() == b.empty();
}

int main() {
    assert(issame({"this"}, {}));
    
    return 0;
}