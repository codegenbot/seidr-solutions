#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::vector<std::string>> b) {
    return a == b[0];
}

int main() {
    assert(issame({"grunt", "trumpet", "prune", "gruesome"}, {{"grunt", "prune"}}));
}