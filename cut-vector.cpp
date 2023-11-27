#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int n = vec.size();
    int diff = std::abs(vec[n-1] - vec[0]);
    int index = 0;
    for (int i = 1; i < n-1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        for (int j = i+1; j < n; j++) {
            rightSum += vec[j];
        }
        if (std::abs(leftSum - rightSum) < diff) {
            diff = std::abs(leftSum - rightSum);
            index = i;
        }
    }
    std::vector<int> left(vec.begin(), vec.begin() + index + 1);
    std::vector<int> right(vec.begin() + index + 1, vec.end());
    return std::make_pair(left, right);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << std::endl;
    }
    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << std::endl;
    }
    return 0;
}