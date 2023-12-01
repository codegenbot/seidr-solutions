#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int diff = INT_MAX;
    int index = -1;

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
            index = i;
        }
    }

    std::vector<int> leftSubvector(input.begin(), input.begin() + index + 1);
    std::vector<int> rightSubvector(input.begin() + index + 1, input.end());

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