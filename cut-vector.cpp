#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += input[i];
    }
    
    std::vector<int> prefixSum(n);
    prefixSum[0] = input[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + input[i];
    }
    
    for (int i = 0; i < n; i++) {
        int leftSum = prefixSum[i];
        int rightSum = totalSum - prefixSum[i];
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    std::vector<int> subvector1(input.begin(), input.begin() + cutIndex + 1);
    std::vector<int> subvector2(input.begin() + cutIndex + 1, input.end());
    
    return std::make_pair(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(input);
    
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << std::endl;
    }
    
    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << std::endl;
    }
    
    return 0;
}