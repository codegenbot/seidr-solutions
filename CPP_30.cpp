#include <vector>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<float> l = {1.0, 2.0, 3.0};
    std::vector<float> m;
    // Input from user
    int n; std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float x; std::cin >> x;
        m.push_back(x);
    }
    std::cout << std::boolalpha << issame(l, m) << std::endl;
}