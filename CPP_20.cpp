#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<double> find_closest_elements(const std::vector<double>& elements) {
    std::vector<double> closest;
    if (elements.size() < 2) {
        return closest;
    }

    double closest_diff = std::abs(elements[1] - elements[0]);
    for (size_t i = 1; i < elements.size() - 1; ++i) {
        double diff = std::abs(elements[i+1] - elements[i]);
        if (diff < closest_diff) {
            closest_diff = diff;
            closest = { elements[i], elements[i+1] };
        }
    }

    return closest;
}

bool issame(const std::vector<double>& v1, const std::vector<double>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}