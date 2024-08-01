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
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 1; i < n; ++i) {
        int leftSum = std::accumulate(vec.begin(), vec.begin() + i, 0);
        int rightSum = std::accumulate(vec.begin() + i, vec.end(), 0);
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff || (diff == minDiff && leftSum <= rightSum)) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        if(i < n - 1) {
            std::cout << vec[i] << " ";
        } else {
            std::cout << vec[i];
        }
    }
    
    return 0;
}