#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int split_index = 0;

    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }

    return {{vec[0]}, {vec.begin() + 1, vec.end()}};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int& num : vec) {
        std::cin >> num;
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);

    std::cout << "["; for (const int& num : result.first) { std::cout << num; } std::cout << "] " << "["; for (const int& num : result.second) { std::cout << num; } std::cout << "]" << std::endl;

    return 0;
}