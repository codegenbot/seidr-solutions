#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<std::vector<float>>& mat) {
    std::vector<float> result;
    for (const auto& row : mat) {
        bool has_pos = false;
        for (auto val : row) {
            if (val > 0) {
                has_pos = true;
                result.push_back(val);
                break;
            }
        }
        if (!has_pos)
            result.push_back(0); // add a zero to maintain size equality
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

    bool same = issame(get_positive(mat), get_positive(std::move(mat)));
    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}