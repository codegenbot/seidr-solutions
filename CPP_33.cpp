#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> sort_third(std::vector<int> vec) {
    if (vec.size() < 3) return vec;

    std::sort(vec.begin(), vec.begin() + 3);
    return vec;
}

std::vector<int> v1, v2;
int n;
std::cin >> n;
v1.resize(n);
v2.resize(n);
for (int i = 0; i < n; ++i) {
    std::cin >> v1[i];
}
for (int i = 0; i < n; ++i) {
    std::cin >> v2[i];
}

if (issame(v1, v2)) {
    std::cout << "Same" << std::endl;
} else {
    std::cout << "Different" << std::endl;
}

assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));

return 0;