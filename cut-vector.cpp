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

    for (int i = 0; i < idx; ++i) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx; i < vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}