#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    std::vector<int> vec = {2, 5, 7, 3, 8, 4, 6};

    int n = vec.size();
    int minDiff = std::abs(vec[0] - std::accumulate(vec.begin() + 1, vec.end(), 0));
    int cutIndex = 0;

    for (int i = 1; i < n; ++i) {
        int diff = std::abs(std::accumulate(vec.begin(), vec.begin() + i, 0) - std::accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::cout << cutIndex + 1 << std::endl;
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