#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) return false;
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    assert(below_threshold({1, 2, 3, 4}, 5));
    std::vector<int> l;
    int n, element, t;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        l.push_back(element);
    }
    std::cout << "Enter threshold: ";
    std::cin >> t;
    if (below_threshold(l, t)) {
        std::cout << "All elements are below threshold." << std::endl;
    } else {
        std::cout << "Not all elements are below threshold." << std::endl;
    }
    return 0;
}