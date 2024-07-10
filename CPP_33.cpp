#include <vector>
#include <algorithm>
#include <cassert>

template<typename T>
auto sort_third = [](std::vector<T>& vec) {
    std::sort(vec.begin(), vec.end());
};

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;
    sort_third<int>(a_sorted);
    sort_third<int>(b_sorted);

    return a_sorted == b_sorted;
}

int main() {
    assert(issame({5, 6, 3, 4, 8, 9, 2, 1}, {1, 2, 3, 4, 5, 6, 8, 9});
    
    return 0;
}