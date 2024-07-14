#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;

    for (int i = 1; i < vec.size(); i++) {
        int diff = vec[i] - vec[0];
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    return {std::vector<int>(vec.begin(), vec.begin() + splitIndex),
            std::vector<int>(vec.begin() + splitIndex, vec.end())};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& x : vec) {
        std::cin >> x;
    }

    auto res = cutVector(vec);

    for (const auto& x : res[0]) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    for (const auto& x : res[1]) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}