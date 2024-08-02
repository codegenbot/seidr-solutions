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
    int n, k;
    
    // Read the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Read the elements
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    // Read k
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    // Call the function and print the result
    int sum = add_elements(arr, k);
    std::cout << "Sum of elements is: " << sum << std::endl;
    
    return 0;
}