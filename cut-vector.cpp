#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> leftVec(vec.begin(), vec.begin() + cutIndex);
    std::vector<int> rightVec(vec.begin() + cutIndex, vec.end());

    return {leftVec, rightVec};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    auto result = cutVector(vec);

    for (const auto& vec : result) {
        for (int num : vec) {
            std::cout << num;
        }
        std::cout << "\n";
    }

    return 0;
}