```cpp
#include <algorithm>
#include <iostream>

bool issame(const std::vector<std::vector<float>>& a, const std::vector<std::vector<float>>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<float>> mat(n);
    for (auto i = 0; i < n; ++i)
        for (auto j = 0; j < n; ++j++)
            std::cin >> mat[i][j];

    bool same = true;
    const auto firstRow = mat[0];
    for (const auto& row : mat) {
        if (row != firstRow) {
            same = false;
            break;
        }
    }

    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}