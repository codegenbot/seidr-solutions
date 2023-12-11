#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> cutVector(const std::vector<int>& numbers) {
    int n = numbers.size();
    int leftSum = 0, rightSum = 0;
    int leftIndex = -1, rightIndex = -1;
    int minDifference = INT_MAX;

    // Calculate the sum of all numbers
    for (int i = 0; i < n; i++) {
        rightSum += numbers[i];
    }

    // Iterate through each index and find the minimum difference
    for (int i = 0; i < n; i++) {
        leftSum += numbers[i];
        rightSum -= numbers[i];
        int difference = abs(leftSum - rightSum);

        if (difference < minDifference) {
            minDifference = difference;
            leftIndex = i;
            rightIndex = i + 1;
        }
    }

    // Create the two subvectors
    std::vector<int> leftSubvector(numbers.begin(), numbers.begin() + leftIndex + 1);
    std::vector<int> rightSubvector(numbers.begin() + rightIndex, numbers.end());

    // Add 0 to the end of the right subvector
    rightSubvector.push_back(0);

    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    std::vector<int> leftSubvector, rightSubvector;
    std::tie(leftSubvector, rightSubvector) = cutVector(numbers);

    for (int num : leftSubvector) {
        std::cout << num << std::endl;
    }
    for (int num : rightSubvector) {
        std::cout << num << std::endl;
    }

    return 0;
}