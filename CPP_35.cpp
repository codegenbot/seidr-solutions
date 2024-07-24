```cpp
#include <iostream>
#include <algorithm>

int main() {
    int nums[100]; // array to store numbers
    int n; // number of elements in the array
    int max_val = INT_MIN; // initialize maximum value as negative infinity
    int sum = 0; // initialize sum as zero

    // ask for number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // read and store numbers from user
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    // find maximum value in the array
    for (int i = 0; i < n; i++) {
        if (nums[i] > max_val)
            max_val = nums[i];
    }

    // calculate absolute maximum value
    int abs_max_val = std::abs(max_val);

    // print result
    std::cout << "The absolute maximum value is: " << abs_max_val << std::endl;

    return 0;
}