#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(8 + 2 * i);
    }
    return result;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}