#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;

    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(b_sorted.begin(), b_sorted.end());

    return std::is_permutation(a_sorted.begin(), a_sorted.end(), b_sorted.begin());
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

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are permutations of each other.\n";
    } else {
        std::cout << "Vectors are not permutations of each other.\n";
    }

    return 0;
}