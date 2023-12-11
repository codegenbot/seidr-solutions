#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int n = vec.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += vec[i];
    }
    
    // Iterate through the vector and find the spot where the difference is minimized
    int minDiff = std::abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 0; i < n; i++) {
        leftSum += vec[i];
        rightSum -= vec[i];
        
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    // Create the two resulting subvectors
    std::vector<int> subVector1(vec.begin(), vec.begin() + cutIndex + 1);
    std::vector<int> subVector2(vec.begin() + cutIndex + 1, vec.end());
    
    return std::make_pair(subVector1, subVector2);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}