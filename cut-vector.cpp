#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int leftSum = 0;
    int rightSum = 0;

    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += input[i];
    }

    // Iterate through the vector and find the spot where the difference is minimized
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;

    for (int i = 0; i < n; i++) {
        leftSum += input[i];
        rightSum -= input[i];

        int diff = abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> leftVector(input.begin(), input.begin() + cutIndex);
    std::vector<int> rightVector(input.begin() + cutIndex, input.end());

    return std::make_pair(leftVector, rightVector);
}

int main() {
    // Read the input vector from the user
    int n;
    std::cin >> n;

    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    // Call the cutVector function to get the resulting subvectors
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(input);

    // Print the resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}