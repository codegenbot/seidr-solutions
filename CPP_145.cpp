#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
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

    assert(issame(std::vector<int>{0, 6, 6, -76, -21, 23, 4}, {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}