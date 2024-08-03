#include <map>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(std::map<char, int>{{'a', 1}}, std::map<char, int>{{'a', 1}}));
    return 0;
}