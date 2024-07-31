#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

std::vector<double> find_closest_elements(const std::vector<double>& elements) {
    std::vector<double> closest_elements;
    double min_diff = std::abs(elements[0] - elements[1]);

    for (size_t i = 0; i < elements.size() - 1; ++i) {
        double diff = std::abs(elements[i] - elements[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {elements[i], elements[i + 1]};
        }
    }

    return closest_elements;
}

bool issame(const std::vector<double>& v1, const std::vector<double>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}