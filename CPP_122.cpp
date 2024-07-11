#include <iostream>
#include <vector>
#include <string>

int add_elements(std::vector<int> arr, int k);

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int n, k;

    // Input number of elements and the number to consider
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter k: ";
    std::cin >> k;

    // Input array elements
    for (int i = 0; i < n; i++) {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        arr.push_back(element);
    }

    // Call the function and print the result
    std::cout << "The sum of elements less than or equal to 2 digits is: " << add_elements(arr, k) << std::endl;

    return 0;
}