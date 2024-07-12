#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    std::vector<int> vec = {2, 5, 7, 3, 8, 4, 6};

    int n = vec.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < n; ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j <= i; ++j) {
            sumLeft += vec[j];
        }
        for (int j = i; j < n; ++j) {
            sumRight += vec[j];
        }
        int diff = abs(sumLeft - sumRight);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::cout << cutIndex << std::endl;
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}