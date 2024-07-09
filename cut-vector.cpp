```c++
#include <vector>
#include <climits>
#include <cmath>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int k = i; k < vec.size(); k++) {
            right_sum += vec[k];
        }
        if (left_sum == right_sum) {
            return {{}, vec};
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left = {vec[0]};
    for (int i = 1; i < cut_index; i++) {
        left.push_back(vec[i]);
    }
    vector<int> right = {};
    for (int i = cut_index; i < vec.size(); i++) {
        right.push_back(vec[i]);
    }
    return {left, right};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (auto& x : vec) std::cin >> x;
    pair<vector<int>, vector<int>> result = cutVector(vec);
    std::cout << "[";
    for (const auto& x : result.first) std::cout << x << " ";
    std::cout << "], [";
    for (const auto& x : result.second) std::cout << x << " ";
    std::cout << "]";
}