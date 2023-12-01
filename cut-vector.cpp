#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& numbers) {
    int n = numbers.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n - 1; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i; j++) {
            leftSum += numbers[j];
        }

        for (int j = i + 1; j < n; j++) {
            rightSum += numbers[j];
        }

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    std::vector<int> leftSubvector(numbers.begin(), numbers.begin() + cutIndex + 1);
    std::vector<int> rightSubvector(numbers.begin() + cutIndex + 1, numbers.end());

    return std::make_pair(leftSubvector, rightSubvector);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(numbers);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}