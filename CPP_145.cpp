#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> order_by_points(std::initializer_list<int> points) {
    return std::vector<int>(points);
}

int main() {
    std::vector<int> vec1, vec2;
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec1.push_back(num);
    }
    for (int i = 0; i < m; ++i) {
        int num;
        std::cin >> num;
        vec2.push_back(num);
    }

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are permutations of each other.\n";
    } else {
        std::cout << "Vectors are not permutations of each other.\n";
    }

    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}