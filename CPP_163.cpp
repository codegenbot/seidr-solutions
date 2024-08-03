#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

assert(issame(generate_integers(17, 89), {});