#include <iostream>
#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int k;

    // Read input from user
    std::cout << "Enter the size of the array: ";
    std::cin >> k;
    arr.resize(k);

    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Call add_elements function
    int result = add_elements(arr, k);
    std::cout << "Sum of elements: " << result << std::endl;

    return 0;
}