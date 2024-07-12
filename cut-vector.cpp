#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    std::vector<int> vec = {2, 5, 7, 3, 8, 4, 6};

    int n = vec.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < n-1; ++i) {
        int sumLeft = std::accumulate(vec.begin(), vec.begin() + i, 0);
        int sumRight = std::accumulate(vec.begin() + i, vec.end(), 0);
        int diff = std::abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}