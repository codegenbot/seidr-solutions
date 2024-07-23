```cpp
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

    std::vector<float> positive = get_positive(a);

    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (float val : v) {
        if (val > 0)
            result.push_back(val);
    }
    return result;
}