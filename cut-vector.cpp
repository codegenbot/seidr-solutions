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

    std::vector<int> left = {vec[0]};
    for (int i = 0; i < pos; i++) {
        left.push_back(vec[i + 1]);
    }

    std::vector<int> right = {vec[pos + 1]};
    for (int i = pos + 2; i < vec.size(); i++) {
        right.push_back(vec[i]);
    }

    return {left, right};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& num : vec) {
        std::cin >> num;
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);

    std::cout << "[";
    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "] [";

    for (int num : result.second) {
        std::cout << num << " ";
    }

    std::cout << "]" << std::endl;

    return 0;
}