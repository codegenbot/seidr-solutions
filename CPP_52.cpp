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
    assert (!below_threshold({1, 8, 4, 10}, 10));
    assert (below_threshold({1, 2, 3, 4}, 5));
    
    int n, t;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> l(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> l[i];
    }
    std::cout << "Enter the threshold: ";
    std::cin >> t;
    
    if (below_threshold(l, t)) {
        std::cout << "All elements are below the threshold.\n";
    } else {
        std::cout << "Not all elements are below the threshold.\n";
    }
    
    return 0;
}