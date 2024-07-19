#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(8 + 2 * i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}