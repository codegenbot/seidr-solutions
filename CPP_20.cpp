#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<double> find_closest_elements(const std::vector<double>& elements) {
    auto minElem = std::min_element(elements.begin(), elements.end());
    auto it = std::adjacent_find(elements.begin(), elements.end(),
        [minElem](double a, double b) { return a == *minElem || b == *minElem; });

    return { *it, *(it + 1) };
}

bool issame(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    return vec1 == vec2;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}