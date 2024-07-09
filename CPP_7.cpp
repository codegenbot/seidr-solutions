#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::equal({"grunt", "prune"}, {"grunt", "prune"}));
}