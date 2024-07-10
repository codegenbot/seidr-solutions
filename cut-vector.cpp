#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < v.size(); ++i) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {{v[0]}, {v.begin() + cutIndex, v.end()}};
}

int main() {
    std::vector<int> input;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(input);

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