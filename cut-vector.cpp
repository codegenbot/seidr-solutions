#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int index = 0;

    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] - vec[0] <= minDiff) {
            minDiff = vec[i] - vec[0];
            index = i;
        }
    }

    return {{vec[0]}, {vec.begin() + index}};
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