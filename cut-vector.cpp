#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            pos = i;
        }
    }

    std::vector<int> left_vec, right_vec;

    for (int i = 0; i < pos; i++) {
        left_vec.push_back(vec[i]);
    }

    for (int i = pos + 1; i < vec.size(); i++) {
        right_vec.push_back(vec[i]);
    }

    return std::make_pair(left_vec, right_vec);
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