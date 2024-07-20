#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

bool order_by_points(const std::vector<int>& points) {
    return std::accumulate(points.begin(), points.end(), 0);
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> vec1(n), vec2(m);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    
    for (int i = 0; i < m; ++i) {
        std::cin >> vec2[i];
    }

    if (issame(vec1, vec2) && order_by_points(vec1) == order_by_points(vec2)) {
        std::cout << "Vectors are permutations of each other.\n";
    } else {
        std::cout << "Vectors are not permutations of each other.\n";
    }

    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {0,6,6,-76,-21,23,4}));

    return 0;
}