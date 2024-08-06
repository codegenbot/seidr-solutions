#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(std::vector<float> arr) {
    std::sort(arr.begin(), arr.end());
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_elements;

    for (size_t i = 0; i < arr.size() - 1; ++i) {
        float diff = std::abs(arr[i] - arr[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {arr[i], arr[i + 1]};
        }
    }

    return closest_elements;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    std::cout << "Test passed!";
    return 0;
}