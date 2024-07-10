#include <vector>
#include <algorithm>
#include <cassert>

template <typename T>
void sort_third(std::vector<T> &vec) {
    std::sort(vec.begin(), vec.end());
}

template <typename T>
bool issame(const std::vector<T> &a, const std::vector<T> &b) {
    std::vector<T> a_sorted = a;
    std::vector<T> b_sorted = b;
    sort_third(a_sorted);
    sort_third(b_sorted);

    return a_sorted == b_sorted;
}

int main {
    assert(issame(std::vector<int>({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({1, 2, 3, 4, 5, 6, 8, 9}));
    assert(!issame(std::vector<int>({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}