#include <iostream>
#include <algorithm>

int main() {
    int nums[100]; // array to store numbers
    int n; // number of elements in the array
    int max_val = INT_MIN; // initialize maximum value as negative infinity
    int sum = 0; // initialize sum as zero

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    int max_val = *std::max_element(nums, nums+n) -> first;

    std::cout << "The absolute maximum value is: " << std::abs(max_val) << std::endl;

    return 0;
}