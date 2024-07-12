#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

bool issame(std::initializer_list<std::string> a, std::initializer_list<std::string> b) {
    return a == b;
}

int main() {
    assert(issame({"Jupiter", "Makemake"}, {}));
    return 0;
}