#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> vec = {2, 5, 7, 3, 8, 4, 6};

    int n = vec.size();
    if (n == 1) {
        for (int val : vec) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
        return 0;
    }

    int totalSum = std::accumulate(vec.begin(), vec.end(), 0);
    int leftSum = 0;
    int minDiff = totalSum;
    int cutIndex = -1;

    for (int i = 0; i < n; ++i) {
        leftSum += vec[i];
        int rightSum = totalSum - leftSum;
        int diff = std::abs(leftSum - rightSum);

        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}