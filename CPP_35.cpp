#include <algorithm>
#include <iostream>
#include <vector>

int maxInArray() {
    std::cout << "Enter numbers (separated by space): ";
    int n;
    std::cin >> n;

    std::vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    if (!array.empty()) {
        int max_val = *std::max_element(array.begin(), array.end());
        int abs_max_val = std::abs(*std::max_element(array.begin(), array.end()));

        std::cout << "Max value: " << max_val << std::endl;
        std::cout << "Abs Max value: " << abs_max_val << std::endl;

    } else {
        std::cout << "Array is empty." << std::endl;
    }

    return 0;
}