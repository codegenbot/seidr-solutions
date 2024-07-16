#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 6984, 8312, 921, 3362, 3078};
    int idx = std::min_element(vec.begin(), vec.end() - 1,
        [](int a, int b) { return abs(a - b) < abs(b - a); }) - vec.begin();

    std::vector<int> subvec1(vec.begin(), vec.begin() + idx + 1);
    std::vector<int> subvec2(vec.begin() + idx + 1, vec.end());

    for (const auto& num : subvec1) {
        std::cout << num << std::endl;
    }

    std::cout << std::endl;

    for (const auto& num : subvec2) {
        std::cout << num << std::endl;
    }

    return 0;
}