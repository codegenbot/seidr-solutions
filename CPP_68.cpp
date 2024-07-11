#include <vector>
#include <algorithm>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> pluck() {
    int n;
    std::vector<int> vec;
    std::cin >> n;
    vec.resize(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    return vec;
}