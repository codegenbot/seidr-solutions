#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; ++j) {
            sum_left += vec[j];
        }
        for (int k = i + 1; k < vec.size(); ++k) {
            sum_right += vec[k];
        }

        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    return {{vec.begin(), vec.begin() + cut_index}, {vec.begin() + cut_index, vec.end()}};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& x : vec) {
        std::cin >> x;
    }

    auto result = cutVector(vec);

    std::cout << "[";
    for (const auto& x : result.first) {
        std::cout << x << " ";
    }
    std::cout << "] [";

    for (const auto& x : result.second) {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}