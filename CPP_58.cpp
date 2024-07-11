#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <set>
#include <cassert>

bool issame(const std::vector<int> &a, const std::vector<int> &b) {
    std::vector<int> a_sorted = a;
    std::sort(a_sorted.begin(), a_sorted.end());

    std::vector<int> b_sorted = b;
    std::sort(b_sorted.begin(), b_sorted.end());

    std::vector<int> result;
    std::set_intersection(a_sorted.begin(), a_sorted.end(), b_sorted.begin(), b_sorted.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result.empty();
}

int main() {
    assert(issame({4, 3, 2, 8}, {}) == true);

    return 0;
}