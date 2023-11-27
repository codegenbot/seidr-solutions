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
    int index = -1; // Initialize index to -1
    
    for (int i = 0; i < n-1; i++) { // Update condition to i < n-1
        currSum += input[i];
        int newDiff = std::abs(sum - 2 * currSum);
        if (newDiff < diff) {
            diff = newDiff;
            index = i;
        }
    }
    
    std::vector<int> subvector1, subvector2;
    if (index >= 0) {
        subvector1 = std::vector<int>(input.begin(), input.begin() + index + 1);
        subvector2 = std::vector<int>(input.begin() + index + 1, input.end());
    }
    else {
        subvector1 = std::vector<int>();
        subvector2 = input; // Whole vector as subvector2
    }
    
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