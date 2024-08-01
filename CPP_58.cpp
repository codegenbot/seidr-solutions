#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <numeric>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> result(l1.size() + l2.size());
    std::vector<int>::iterator it;
    it = std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), result.begin());
    result.resize(it - result.begin());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), std::vector<int>{}));
    return 0;
}