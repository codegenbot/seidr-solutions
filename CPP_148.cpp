#include <vector>
#include <string>
#include <cassert>

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(is_same(std::vector<std::string>{"Jupiter", "Makemake"}, std::vector<std::string>{}));
    return 0;
}