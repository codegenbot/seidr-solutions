```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::vector<float>>& a, const std::vector<std::vector<float>>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cin >> n;

    for (auto i = 0; i < n; ++i) {
        std::vector<float> row(n);
        for (auto j = 0; j < n; ++j++) {
            std::cin >> row[j];
        }
        std::cin.ignore();
        bool same = true;
        for (auto j = 1; j < n; ++j) {
            if (!(std::cin >> row[0])) { 
                same = false;
                break;
            }
            row[j-1] = row[0];
        }

        std::cout << (same ? "YES" : "NO") << std::endl;
    }

    return 0;
}