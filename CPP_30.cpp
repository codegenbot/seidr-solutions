```
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<std::vector<float>>& mat) {
    std::vector<float> result;
    for (const auto& row : mat) {
        bool found = false;
        for (auto val : row) {
            if (val > 0) {
                result.push_back(val);
                found = true;
                break;
            }
        }
        if (!found)
            return std::vector<float>(); // Return an empty vector if no positive value is found in a row
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

    bool same = issame(get_positive(mat), get_positive(std::vector<std::vector<float>>(mat)));
    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}