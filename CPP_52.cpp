#include <vector>
#include <iostream>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    std::vector<int> numbers = {1, 2, 3};
    int threshold = 5;
    if (below_threshold(numbers, threshold)) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is not below the threshold." << std::endl;
    }
    return 0;
}