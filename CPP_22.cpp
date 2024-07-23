#include <vector>
#include <algorithm>
#include <cassert>
#include <type_traits>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& mixedVector) {
    std::vector<int> result;
    for (int num : mixedVector) {
        if (std::is_same_v<int, int>) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}