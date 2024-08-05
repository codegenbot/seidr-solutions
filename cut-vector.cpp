#include <climits>
#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {{vec.begin(), vec.begin() + cutIndex}, {vec.begin() + cutIndex, vec.end()}};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& x : vec) {
        std::cin >> x;
    }

    auto result = cutVector(vec);

    for (const auto& x : result.first) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    for (const auto& x : result.second) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}