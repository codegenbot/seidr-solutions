#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::all_of(a.begin(), a.end(), [&b](const float& val) { return val == b[0]; });
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> a(n);
    for (auto i = 0; i < n; ++i)
        std::cin >> a[i];

    bool same = true;
    float first = a[0];
    for (const auto& val : a) {
        if (!(std::cin >> val)) { 
            same = false;
            break;
        }
        if (val != first) {
            same = false;
            break;
        }
    }

    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}