#include <iostream>
#include <vector>

std::vector<int> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int diff = INT_MAX;
    int index = 0;
    
    // Find the spot where the difference is as small as possible
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += input[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += input[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }
    
    // Create the two resulting subvectors
    std::vector<int> leftSubvector(input.begin(), input.begin() + index);
    std::vector<int> rightSubvector(input.begin() + index, input.end());
    
    // Add 0 to the end of the right subvector
    rightSubvector.push_back(0);
    
    return {leftSubvector, rightSubvector};
}

int main() {
    int num;
    std::vector<int> input;
    
    // Read input from user
    while (std::cin >> num) {
        input.push_back(num);
    }
    
    // Call the cutVector function and print the resulting subvectors
    std::vector<int> result1, result2;
    std::tie(result1, result2) = cutVector(input);
    
    for (int i : result1) {
        std::cout << i << std::endl;
    }
    
    for (int i : result2) {
        std::cout << i << std::endl;
    }
    
    return 0;
}