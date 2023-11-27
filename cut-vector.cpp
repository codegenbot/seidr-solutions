#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& numbers) {
    int totalSum = 0;
    for (int num : numbers) {
        totalSum += num;
    }
    
    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        leftSum += numbers[i];
        rightSum -= numbers[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }
    
    std::vector<int> leftVector(numbers.begin(), numbers.begin() + cutIndex);
    std::vector<int> rightVector(numbers.begin() + cutIndex, numbers.end());
    
    return std::make_pair(leftVector, rightVector);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(numbers);
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}