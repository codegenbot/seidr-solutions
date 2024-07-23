#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (std::count(a.begin(), a.end(), 0.0f) == 0 && 
           std::count(b.begin(), b.end(), 0.0f) == 0 &&
           a.size() == b.size());
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> a(n);
    for (auto i = 0; i < n; ++i)
        std::cin >> a[i];

    bool same = issame(a, a);

    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}