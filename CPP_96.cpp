#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> vec1, vec2;
    int n, m;
    std::cin >> n >> m;
    vec1.resize(n);
    vec2.resize(m);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> vec2[i];
    }
    bool result = issame(vec1, vec2);
    return result;
}