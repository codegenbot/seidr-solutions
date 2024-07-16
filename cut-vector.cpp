#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int idx = 0;
    int min_diff = abs(vec[idx] - vec[idx + 1]);

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    std::vector<int> subvec1;
    for (int i = 0; i <= idx; ++i) {
        subvec1.push_back(vec[i]);
    }

    std::vector<int> subvec2;
    for (int i = idx + 1; i < vec.size(); ++i) {
        subvec2.push_back(vec[i]);
    }

    for (int v : subvec1) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    for (int v : subvec2) {
        std::cout << v << " ";
    }

    return 0;
}