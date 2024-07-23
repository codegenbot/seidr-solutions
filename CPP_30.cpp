#include <vector>
#include <algorithm>

bool issame(const std::vector<std::vector<float>>& a, const std::vector<std::vector<float>>& b) {
    return a.size() == b.size();
}

int main() {
    int n;
    std::cin >> n;

    bool same = false;
    for (auto i = 0; i < n; ++i)
        if (!(std::cin >> same)) 
            break;

    std::vector<std::vector<float>> a(n);
    for (auto& row : a) {
        float x, y;
        std::cin >> x >> y;
        row.push_back(x);
        row.push_back(y);
    }

    bool same1 = true;
    for (const auto& row : a) {
        if (!(std::cin >> row[0] >> row[1])) { 
            same1 = false;
            break;
        }
    }

    std::cout << (same && same1 ? "YES" : "NO") << std::endl;

    return 0;
}