#include <vector>
#include <iostream>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) return false;
    }
    return true;
}

int main() {
    std::vector<int> vec;
    int n, threshold;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    vec.resize(n);

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    if (!below_threshold(vec, threshold)) {
        std::cout << "There is at least one number greater than or equal to the threshold." << std::endl;
    } else {
        std::cout << "All numbers are below the threshold." << std::endl;
    }
    
    return 0;
}