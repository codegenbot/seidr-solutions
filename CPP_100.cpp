#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int size) {
    std::vector<int> result;
    for (int i = 0; i < size; ++i) {
        result.push_back(8 + 2 * i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }

    return true;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}