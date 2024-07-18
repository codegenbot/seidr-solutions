#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <limits>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int largest_negative = *std::max_element(lst.begin(), lst.end(), [](int a, int b) { return a < 0 && a > b; });
    int smallest_positive = *std::min_element(lst.begin(), lst.end(), [](int a, int b) { return a > 0 && a < b; });

    return {largest_negative, smallest_positive};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1});

    return 0;
}