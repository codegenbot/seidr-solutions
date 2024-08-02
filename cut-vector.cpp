#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < vec.size(); ++i) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {{vec[0]}, {vec.begin() + cutIndex}};
}

int main() {
    std::vector<int> vec;
    int num;
    while (std::cin >> num && num != 1) {
        vec.push_back(num);
    }

    auto res = cutVector(vec);

    for (const auto& v : res.first) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    for (const auto& v : res.second) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    return 0;
}