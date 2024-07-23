bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int threshold = 3;

    bool result = below_threshold(numbers, threshold);

    if (result) {
        std::cout << "All elements are below the threshold." << std::endl;
    } else {
        std::cout << "At least one element is not below the threshold." << std::endl;
    }

    return 0;
}