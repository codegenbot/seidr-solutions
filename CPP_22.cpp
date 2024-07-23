#include <vector>
#include <algorithm>
#include <cassert>
#include <type_traits>

bool is_same_vectors(const std::vector<int> &a, const std::vector<int> &b) {
    std::vector<int> a_sorted = a;
    std::sort(a_sorted.begin(), a_sorted.end());
    std::vector<int> b_sorted = b;
    std::sort(b_sorted.begin(), b_sorted.end());
    return a_sorted == b_sorted;
}

std::vector<int> filter_integers(const std::vector<int> &mixedVector) {
    std::vector<int> result;
    for (int num : mixedVector) {
        if (std::is_same_v<decltype(num), int>) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(is_same_vectors(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));

    return 0;
}