#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    
    int totalSum = 0;
    for (int num : vec) {
        totalSum += num;
    }
    
    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        leftSum += vec[i];
        rightSum -= vec[i];
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << vec[i] << std::endl;
    }
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << vec[i] << std::endl;
    }
    
    return 0;
}