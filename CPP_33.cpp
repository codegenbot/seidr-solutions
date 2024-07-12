#include <iostream>
#include <algorithm>
#include <vector>

std::size_type sort_third(const std::vector<std::vector<int>>& vec) {
    for (auto& v : vec) {
        if (v.size() >= 3) {
            std::sort(v.begin(), v.end());
            auto it = std::unique_copy(v.begin(), v.end(), v.begin());
            v.erase(it, v.end());
        }
    }
    return 0;
}

int main() {
    int n;
    std::cout << "Enter number of vectors: ";
    std::cin >> n;

    std::vector<std::vector<int>> vec(n);

    for (auto& v : vec) {
        int m;
        std::cout << "Enter size of vector: ";
        std::cin >> m;
        v.resize(m);
        for (int i = 0; i < m; ++i) {
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> v[i];
        }
    }

    sort_third(vec);

    for (const auto& v : vec) {
        bool is_duplicate = false;
        for (int i = 0; i < v.size() - 2; ++i) {
            if (issame({v[i], v[i + 1], v[i + 2]}, {v[0], v[1], v[2]})) {
                is_duplicate = true;
                break;
            }
        }
        std::cout << "Vector is duplicate: ";
        if (is_duplicate) {
            std::cout << "true" << std::endl;
        } else {
            std::cout << "false" << std::endl;
        }
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