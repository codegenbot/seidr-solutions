#include <iostream>
#include <algorithm>
#include <vector>

std::size_t sort_third(std::vector<std::vector<int>>& vec) {
    for (auto& subVec : vec) {
        std::sort(subVec.begin(), subVec.end());
    }
    return 0;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> vec(n);
    for (auto& v : vec) {
        v.resize(m);
        for (auto& x : v) {
            std::cin >> x;
        }
    }

    sort_third(vec);

    bool same = true;
    for (int i = 0; i < n - 1; ++i) {
        if (!issame(vec[i], vec[i + 1])) {
            same = false;
            break;
        }
    }

    std::cout << (same ? "YES" : "NO") << '\n';

    return 0;
}