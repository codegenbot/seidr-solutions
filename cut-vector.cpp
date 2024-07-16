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

    // Outputs the left subvector
    for (int i = 0; i < idx; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Outputs the right subvector
    for (int i = idx; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}