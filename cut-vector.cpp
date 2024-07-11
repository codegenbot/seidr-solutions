#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> vec = {2, 5, 7, 3, 8, 4, 6};
    
    int cutIndex = 0;
    int n = vec.size();
    int minDiff = INT_MAX;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += vec[j];
        }
        for (int j = i; j < n; ++j) {
            rightSum += vec[j];
        }
        
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    
    std::cout << cutIndex << std::endl;
    for (int i = 0; i < cutIndex; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        std::cout << vec[i] << " ";
    }
    
    return 0;
}