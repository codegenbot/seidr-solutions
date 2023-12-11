#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += input[i];
    }
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
    std::vector<int> leftVector(input.begin(), input.begin() + cutIndex);
    std::vector<int> rightVector(input.begin() + cutIndex, input.end());
    return std::make_pair(leftVector, rightVector);
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