#include <vector>
#include <algorithm>
#include <cassert>
#include <type_traits>

bool is_same(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& mixedVector) {
    std::vector<int> result;
    for (int num : mixedVector) {
        if (std::is_same_v<std::decay_t<decltype(num)>, int>) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}