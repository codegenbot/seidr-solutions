#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> nums;
    int threshold;

    int num_elements;
    std::cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    std::cin >> threshold;

    if (below_threshold(nums, threshold)) {
        std::cout << "All numbers are below the threshold" << std::endl;
    } else {
        std::cout << "Some numbers are not below the threshold" << std::endl;
    }

    return 0;
}