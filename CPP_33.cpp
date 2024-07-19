#include <iostream>
#include <vector>
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

// Define 'sort_third' function if needed

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

    // Check if vectors are the same
    if (issame(v1, v2)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }

    // Adjust assert statement if 'sort_third' is needed
    // assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1});

    return 0;
}