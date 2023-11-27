#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int diff = INT_MAX;
    int cutIndex = -1;
    
    // Find the index where the difference between two sides is minimum
    for (int i = 1; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += input[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += input[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    // Create the two subvectors
    std::vector<int> left(input.begin(), input.begin() + cutIndex);
    std::vector<int> right(input.begin() + cutIndex, input.end());
    
    return std::make_pair(left, right);
}

int main() {
    // Read the input vector
    int n;
    std::cin >> n;
    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }
    
    // Cut the vector and get the resulting subvectors
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(input);
    
    // Print the subvectors
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << std::endl;
    }
    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << std::endl;
    }
    
    return 0;
}