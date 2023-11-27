#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n - 1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += input[j];
        }
        for (int j = i + 1; j < n; j++) {
            rightSum += input[j];
        }

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    std::vector<int> leftSubvector;
    std::vector<int> rightSubvector;

    for (int i = 0; i <= cutIndex; i++) {
        leftSubvector.push_back(input[i]);
    }
    for (int i = cutIndex + 1; i < n; i++) {
        rightSubvector.push_back(input[i]);
    }

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

    for (int x : result.first) {
        std::cout << x << std::endl;
    }
    for (int x : result.second) {
        std::cout << x << std::endl;
    }

    return 0;
}