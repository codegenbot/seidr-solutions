#include <vector>
#include <iostream>

std::vector<int> cutVector(std::vector<int>& vec) {
    int n = vec.size();
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += vec[i];
    }
    
    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 0; i < n; i++) {
        leftSum += vec[i];
        rightSum -= vec[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    std::vector<int> subVec1(vec.begin(), vec.begin() + cutIndex + 1);
    std::vector<int> subVec2(vec.begin() + cutIndex + 1, vec.end());
    
    std::vector<int> result;
    result.push_back(subVec1);
    result.push_back(subVec2);
    
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    
    std::vector<int> result = cutVector(vec);
    
    for (int i = 0; i < result[0].size(); i++) {
        std::cout << result[0][i] << std::endl;
    }
    
    for (int i = 0; i < result[1].size(); i++) {
        std::cout << result[1][i] << std::endl;
    }
    
    return 0;
}