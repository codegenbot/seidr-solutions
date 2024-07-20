#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
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

    return 0;
}