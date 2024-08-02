#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> a, b;
    int x;
    std::cout << "Enter elements for vector a (space-separated): ";
    while (std::cin >> x) {
        a.push_back(x);
    }
    std::cout << "Enter elements for vector b (space-separated): ";
    while (std::cin >> x) {
        b.push_back(x);
    }

    bool result = issame(a, b);
    if (result) {
        std::cout << "Vectors are the same after sorting." << std::endl;
    } else {
        std::cout << "Vectors are different after sorting." << std::endl;
    }

    assert(issame(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{0, 2, 3, 5, 9, 123}));

    return 0;
}