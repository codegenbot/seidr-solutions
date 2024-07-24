#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> a, b;
    int n;
    std::cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::cin >> n;
    b.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }

    bool result = issame(a, b);
    std::cout << (result ? "true" : "false") << std::endl;

    return 0;
}