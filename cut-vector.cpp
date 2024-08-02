#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> leftVec, rightVec;

    for (int i = 0; i <= cutIndex; i++) {
        leftVec.push_back(vec[i]);
    }

    for (int i = cutIndex + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }

    return {leftVec, rightVec};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int& x : vec) {
        std::cin >> x;
    }

    auto result = cutVector(vec);

    for (const auto& num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    for (const auto& num : result.second) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}