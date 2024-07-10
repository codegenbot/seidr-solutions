#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i < vec.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        for (int j = i; j < vec.size(); ++j) {
            right_sum += vec[j];
        }

        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    std::vector<int> left_vec(vec.begin(), vec.begin() + cut_index);
    std::vector<int> right_vec(vec.begin() + cut_index, vec.end());
    return {left_vec, right_vec};
}

int main() {
    int num;
    std::cin >> num;

    while (num--) {
        std::vector<int> vec;
        while (true) {
            int x;
            std::cin >> x;
            if (!x) break;
            vec.push_back(x);
        }

        std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);

        for (const auto& num : result.first) {
            std::cout << num << " ";
        }
        std::cout << "\n";

        for (const auto& num : result.second) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}