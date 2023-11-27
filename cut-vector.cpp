#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int sum = 0;
    for (int num : input) {
        sum += num;
    }
    
    int halfSum = sum / 2;
    int currSum = 0;
    int diff = std::abs(sum - 2 * currSum);
    int index = 0;
    
    for (int i = 0; i < n; i++) {
        currSum += input[i];
        int newDiff = std::abs(sum - 2 * currSum);
        if (newDiff < diff) {
            diff = newDiff;
            index = i;
        }
    }
    
    std::vector<int> subvector1(input.begin(), input.begin() + index + 1);
    std::vector<int> subvector2(input.begin() + index + 1, input.end());
    
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
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}