#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int minDiff = INT_MAX;
    int cutIdx = -1;

    for (int i = 1; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += input[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += input[j];
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIdx = i;
        }
    }

    std::vector<int> leftVector(input.begin(), input.begin() + cutIdx);
    std::vector<int> rightVector(input.begin() + cutIdx, input.end());

    return {leftVector, rightVector};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    std::vector<int> result = cutVector(input);

    for (int i = 0; i < result[0].size(); i++) {
        std::cout << result[0][i] << std::endl;
    }

    for (int i = 0; i < result[1].size(); i++) {
        std::cout << result[1][i] << std::endl;
    }

    return 0;
}