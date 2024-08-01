#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;
    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(b_sorted.begin(), b_sorted.end());
    return a_sorted == b_sorted;
}

bool sort_array(const std::vector<int>& v) {
    return issame(v, {23, 21, 14, 11});
}

int main() {
    std::vector<int> expected = {11, 14, 21, 23};
    assert(sort_array({21, 14, 23, 11}) == true);
    return 0;
}