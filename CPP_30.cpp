#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<std::vector<float>>& mat) {
    std::vector<float> result;
    for (const auto& row : mat) {
        bool found_negative = false;
        for (float num : row) {
            if (num < 0.0f) {
                found_negative = true;
                break;
            }
        }
        if (!found_negative)
            std::copy(row.begin(), row.end(), std::back_inserter(result));
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<float>> mat(n);
    for (auto i = 0; i < n; ++i)
        for (auto j = 0; j < n; ++j++)
            std::cin >> mat[i][j];

    bool same = true;
    for (const auto& row : get_positive(mat)) {
        if (!(std::cin >> row[0])) { 
            same = false;
            break;
        }
    }

    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}