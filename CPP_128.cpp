#include <iostream>
#include <vector>
#include <cmath>
#include <cassert> // Add this header for assert

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        } else {
            product *= 0;
        }
        
        sum += std::abs(num);
    }
    
    return product * sum;
}

int main() {
    int n;
    std::vector<int> arr;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    int result = prod_signs(arr);
    std::cout << "Result: " << result << std::endl;

    return 0;
}