#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < vec.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) left_sum += vec[j];
        for (int j = i + 1; j < vec.size(); ++j) right_sum += vec[j];

        if (left_sum == right_sum || abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            index = i;
        }
    }

    std::vector<int> left_vec, right_vec;
    for (int i = 0; i < index; ++i) left_vec.push_back(vec[i]);
    for (int i = index; i < vec.size(); ++i) right_vec.push_back(vec[i]);

    return {left_vec, right_vec};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& x : vec) std::cin >> x;

    auto result = cutVector(vec);

    std::cout << "[";
    for (const auto& x : result.first) std::cout << x << " ";
    std::cout << "]\n";

    std::cout << "[";
    for (const auto& x : result.second) std::cout << x << " ";
    std::cout << "]\n";

    return 0;
}