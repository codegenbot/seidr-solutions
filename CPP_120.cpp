#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<std::vector<int>> maximum(int n, int m, int k) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < n; ++i) {
        std::vector<int> temp;
        for (int j = 0; j < m; ++j) {
            temp.push_back(i * m + j);
        }
        result.push_back(temp);
    }

    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(result.begin(), result.end(),
                                   [](const std::vector<int>& a, const std::vector<int>& b) {
                                       return a[0] > b[0];
                                   });
        result[i] = *it;
    }
    return result;
}