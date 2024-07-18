#include <vector>
#include <cassert>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::vector<std::string> bf{"Jupiter", "Makemake"};
    assert(!issame(bf, {"Jupiter", "Makemake"}));
    return 0;
}