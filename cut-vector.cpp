#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int split_index = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
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
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
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