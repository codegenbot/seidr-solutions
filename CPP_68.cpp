#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }

    if (issame(a, b)) {
        std::cout << "The vectors are the same" << std::endl;
    } else {
        std::cout << "The vectors are different" << std::endl;
    }

    return 0;
}