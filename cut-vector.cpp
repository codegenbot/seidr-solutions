#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < i; ++j) {
            sum_left += vec[j];
        }
        for (int j = i + 1; j < vec.size(); ++j) {
            sum_right += vec[j];
        }

        int diff = abs(sum_left - sum_right);
        if (diff == 0 || diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    std::vector<int> left, right;
    for (int i = 0; i < cut_index; ++i) {
        left.push_back(vec[i]);
    }
    for (int i = cut_index; i < vec.size(); ++i) {
        right.push_back(vec[i]);
    }

    return {left, right};
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
    std::cout << "] 0" << std::endl;

    return 0;
}