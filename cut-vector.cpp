#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;

    for (int i = 1; i < vec.size(); i++) {
        int leftSum = 0, rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }

        for (int j = i; j < vec.size(); j++) {
            rightSum += vec[j];
        }

        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    return {std::vector<int>(vec.begin(), vec.begin() + splitIndex), std::vector<int>(vec.begin() + splitIndex, vec.end())};
}

int main() {
    int n;
    std::cin >> n;  
    std::vector<int> inputVec(n);
    for (auto& x : inputVec) {
        std::cin >> x;  
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(inputVec);
    
    // Print the output vectors here
    
    return 0;
}