#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& v) {
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < v.size() - 1; ++i) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    std::vector<int> left = {v[0]};
    std::vector<int> right;

    for (int i = 0; i < cut_index; ++i) {
        left.push_back(v[i]);
    }

    for (int i = cut_index + 1; i < v.size(); ++i) {
        right.push_back(v[i]);
    }

    return {left, right};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int& x : v) {
        std::cin >> x;
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(v);

    std::cout << "[";
    for (int i = 0; i < result.first.size() - 1; ++i) {
        std::cout << result.first[i] << " ";
    }
    if (!result.first.empty()) {
        std::cout << result.first.back();
    }
    std::cout << "] [";
    for (int i = 0; i < result.second.size() - 1; ++i) {
        std::cout << result.second[i] << " ";
    }
    if (!result.second.empty()) {
        std::cout << result.second.back();
    }
    std::cout << "]" << std::endl;

    return 0;
}