#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> vec = {2, 5, 7, 3, 8, 4, 6};

    int n = vec.size();
    int totalSum = std::accumulate(vec.begin(), vec.end(), 0);
    int leftSum = 0;
    int minDiff = totalSum;
    int cutIndex = 0;

    for (int i = 0; i < n; ++i) {
        int rightSum = totalSum - leftSum;
        int diff = std::abs(leftSum - rightSum);

        if (diff < minDiff || (diff == minDiff && i == n-1)) {
            minDiff = diff;
            cutIndex = i;
        }

        if (i == cutIndex) {
            for (int j = 0; j <= cutIndex; ++j) {
                std::cout << vec[j] << " ";
            }
            std::cout << std::endl;
        }

        leftSum += vec[i];
    }

    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}