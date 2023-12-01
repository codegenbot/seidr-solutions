#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int totalSum = std::accumulate(input.begin(), input.end(), 0);
    int leftSum = 0;
    int rightSum = totalSum;

    int minDifference = std::abs(leftSum - rightSum);
    int cutIndex = 0;

    for (int i = 0; i < input.size(); i++) {
        leftSum += input[i];
        rightSum -= input[i];
        int currentDifference = std::abs(leftSum - rightSum);

        if (currentDifference < minDifference) {
            minDifference = currentDifference;
            cutIndex = i;
        }
    }

    std::vector<int> leftSubvector(input.begin(), input.begin() + cutIndex + 1);
    std::vector<int> rightSubvector(input.begin() + cutIndex + 1, input.end());

    return std::make_pair(leftSubvector, rightSubvector);
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