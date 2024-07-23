#include <vector>
#include <algorithm>
#include <cassert>
#include <type_traits>
#include <cstdint>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> filter_integers(std::vector<int> mixedVector) {
    std::vector<int> result;
    for (int num : mixedVector) {
        if (std::is_same_v<int, decltype(num)>) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 3, 3}), {3, 3, 3}));

    return 0;
}