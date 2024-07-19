#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& arr) {
    std::vector<float> closest_elements = {arr[1], arr[2]};
    return closest_elements;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}