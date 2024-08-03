#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int sumLeft = 0, sumRight = 0;

        for (int j = 0; j <= i; j++) {
            sumLeft += vec[j];
        }

        for (int k = i + 1; k < vec.size(); k++) {
            sumRight += vec[k];
        }

        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    std::vector<int> left, right;

    for (int i = 0; i <= pos; i++) {
        left.push_back(vec[i]);
    }

    for (int i = pos + 1; i < vec.size(); i++) {
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
    std::cout << "]" << std::endl;

    std::cout << "[";
    for (const auto& x : result.second) {
        std::cout << x << " ";
    }
    std::cout << "0]" << std::endl;

    return 0;
}