#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& v) {
    int min_diff = INT_MAX;
    int cut_idx = -1;

    for (int i = 0; i < v.size() - 1; ++i) {
        int left_sum = 0;
        int right_sum = 0;

        for (int j = 0; j <= i; ++j) {
            left_sum += v[j];
        }

        for (int j = i + 1; j < v.size(); ++j) {
            right_sum += v[j];
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    return {std::vector<int>(v.begin(), v.begin() + cut_idx),
            std::vector<int>(v.begin() + cut_idx, v.end())};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    auto result = cutVector(vec);

    for (const auto& v : result) {
        for (int x : v) {
            std::cout << x << " ";
        }
        std::cout << "\n";
    }

    return 0;
}