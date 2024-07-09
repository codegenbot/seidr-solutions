#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(n + 2*i);
    }
    return result;
}