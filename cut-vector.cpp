#include <iostream>
#include <vector>
#include <climits>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int cut_idx = -1;
    int min_diff = INT_MAX;

    for (int i = 0; i < vec.size() - 1; ++i) {
        if (abs(vec[i] - vec[i + 1]) <= min_diff) {
            min_diff = abs(vec[i] - vec[i + 1]);
            cut_idx = i;
        }
    }

    if (cut_idx == -1) {
        for (const auto& num : vec) {
            std::cout << num << std::endl;
        }
    } else {
        std::vector<int> subvec1(vec.begin(), vec.begin() + cut_idx + 1);
        std::vector<int> subvec2(vec.begin() + cut_idx + 1, vec.end());

        for (const auto& num : subvec1) {
            std::cout << num << std::endl;
        }

        std::cout << std::endl;

        for (const auto& num : subvec2) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}