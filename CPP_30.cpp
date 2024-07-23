#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> a(n);
    for (auto i = 0; i < n; ++i)
        std::cin >> a[i];

    bool same = true;
    for (const auto& val : a) {
        if (!(std::cin >> val)) {
            same = false;
            break;
        }
    }

    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}