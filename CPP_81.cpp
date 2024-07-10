#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<std::string>{"E", "D-"}, {"E", "D-"}));
    
    return 0;
}