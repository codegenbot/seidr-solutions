#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <set>
#include <iterator>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> result;
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), std::back_inserter(result));
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}) , std::vector<int>{}));
    return 0;
}