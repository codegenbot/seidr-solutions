#include <map>
#include <string>
#include <algorithm>
#include <cassert>

bool is_same(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(const std::string& test) {
    // Existing histogram function remains the same
}

int main() {
    assert(is_same(histogram("a"), std::map<char, int>{{'a', 1}}));
    return 0;
}