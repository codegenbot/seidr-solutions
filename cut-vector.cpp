#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    int totalSum = std::accumulate(vec.begin(), vec.end(), 0);
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; ++i) {
        prefixSum += vec[i];
        int diff = std::abs(totalSum - 2 * prefixSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}