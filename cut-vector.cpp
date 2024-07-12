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

    for (int i = 0; i < n - 1; ++i) {
        leftSum += vec[i];
        int rightSum = totalSum - leftSum;
        int diff = std::abs(leftSum - rightSum);

        if (diff < minDiff || (diff == minDiff && i == n-2)) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::cout << cutIndex + 1 << std::endl;
  
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