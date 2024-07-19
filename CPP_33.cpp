#include <iostream>
#include <vector>
#include <algorithm>

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

void sort_third(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

int main() {
    std::vector<int> v1, v2;
    // Read input vectors
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

    sort_third(v1);
    sort_third(v2);

    // Check if vectors are the same
    if (issame(v1, v2)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }

    return 0;
}