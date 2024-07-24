#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        for (int k = i + 1; k < vec.size(); k++) {
            rightSum += vec[k];
        }

        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    std::vector<int> leftVec, rightVec;
    for (int i = 0; i <= splitIndex; i++) {
        leftVec.push_back(vec[i]);
    }
    for (int i = splitIndex + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }

    return {leftVec, rightVec};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);

    std::cout << "Left: ";
    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    std::cout << "Right: ";
    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}