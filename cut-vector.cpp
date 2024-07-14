#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int split_index = 0;

    for (int i = 1; i < vec.size(); ++i) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }

    return {{vec.begin(), vec.begin() + split_index}, {vec.begin() + split_index, vec.end()}};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& x : vec) std::cin >> x;

    auto [left, right] = cutVector(vec);

    for (const auto& x : left) std::cout << x << " ";
    std::cout << "\n";
    for (const auto& x : right) std::cout << x << " ";
    return 0;
}