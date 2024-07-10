#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int index = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }

    return {{vec.begin(), vec.begin() + index}, {vec.begin() + index, vec.end()}};
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