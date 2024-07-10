#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame({"271", "137", "314"}, {"271", "137", "314"}));
    assert(odd_count({"271", "137", "314"}) == 4);
    return 0;
}