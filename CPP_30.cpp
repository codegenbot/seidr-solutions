#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<float>> get_positive(const std::vector<std::vector<float>>& mat) {
    std::vector<std::vector<float>> result;
    for (const auto& row : mat) {
        std::vector<float> temp_row;
        bool found_negative = false;
        for (auto val : row) {
            if (val > 0) {
                temp_row.push_back(val);
            } else {
                found_negative = true;
            }
        }
        if (!found_negative)
            result.push_back(temp_row);
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

    bool same = issame(get_positive(mat), get_positive(std::vector<std::vector<float>>(mat.begin(), mat.end())));
    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}