#include <iostream>
#include <vector>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int threshold = 6;

    if (below_threshold(numbers, threshold)) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is not below the threshold." << std::endl;
    }

    return 0;
}