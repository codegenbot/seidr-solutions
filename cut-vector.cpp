#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    std::vector<int> vec;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec.push_back(num);
    }

    int idx = 0;
    int min_diff = abs(vec[idx] - vec[idx + 1]);

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    std::vector<int> subvec1(vec.begin(), vec.begin() + idx + 1);
    std::vector<int> subvec2(vec.begin() + idx + 1, vec.end());

    for (const auto& num : subvec1) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    for (const auto& num : subvec2) {
        std::cout << num << " ";
    }

    return 0;
}