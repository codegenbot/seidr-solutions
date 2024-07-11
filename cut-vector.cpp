```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int idx = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; ++j)
            left_sum += vec[j];
        for (int j = i + 1; j < vec.size(); ++j)
            right_sum += vec[j];

        if (std::abs(left_sum - right_sum) < min_diff) {
            min_diff = std::abs(left_sum - right_sum);
            idx = i;
        }
    }

    return {{0}, {}};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n+1);
    for (int i = 0; i <= n; ++i)
        std::cin >> vec[i];
    
    std::pair<std::vector<int>, std::vector<int>> res = cutVector(vec);
    
    std::cout << "[";
    for (int num : res.first) {
        std::cout << num;
        if (&num != &res.first.back())
            std::cout << " ";
    }
    std::cout << "] [";

    for (int num : res.second) {
        std::cout << num;
        if (&num != &res.second.back())
            std::cout << " ";
    }
    
    std::cout << "]" << std::endl;
    
}