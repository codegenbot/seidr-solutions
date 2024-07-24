#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    std::vector<int> leftVec, rightVec;
    for (int i = 0; i < pos; i++) {
        leftVec.push_back(vec[i]);
    }
    for (int i = pos + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }

    return {leftVec, rightVec};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& x : vec) {
        std::cin >> x;
    }

    auto res = cutVector(vec);

    for (const auto& x : res.first) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    for (const auto& x : res.second) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}