#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int idx = 0;
    int min_diff = abs(vec[0] - vec[1]);

    for (int i = 1; i < vec.size() - 1; ++i) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; ++j) {
            sum_left += vec[j];
        }
        for (int j = i+1; j < vec.size(); ++j) {
            sum_right += vec[j];
        }
        int diff = abs(sum_left - sum_right);

        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    for (int i = 0; i <= idx; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    for (int i = idx+1; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}