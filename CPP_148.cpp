#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && a[0] == b[0];
}

int main() {
    assert(issame({"Jupiter"}, {"Makemake"}));

    return 0;
}