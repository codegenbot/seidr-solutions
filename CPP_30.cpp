#include <vector>
#include <algorithm>

bool issame(const std::vector<std::vector<float>>& a, const std::vector<std::vector<float>>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cin >> n;

    for (auto i = 0; i < n; ++i)
        mat[i].resize(n);

    bool same = true;
    for (const auto& row : mat) {
        float val;
        while (std::cin >> val)
            row.push_back(val);
        if (!(std::cin >> val)) { 
            same = false;
            break;
        }
    }

    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}