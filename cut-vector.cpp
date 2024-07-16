#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int idx = 0;
    int min_diff = INT_MAX / 2;

    for (int i = 0; i < vec.size(); ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    std::vector<int> subvec1(vec.begin(), vec.begin() + idx + 1);
    std::vector<int> subvec2(vec.begin() + idx + 1, vec.end());

    if (subvec1.back() == subvec2.front()) {
        subvec1.push_back(subvec2.front());
        subvec2.erase(subvec2.begin());
    }

    for (const auto& num : subvec1) {
        std::cout << num << std::endl;
    }

    std::cout << std::endl;

    for (const auto& num : subvec2) {
        std::cout << num << std::endl;
    }

    return 0;
}