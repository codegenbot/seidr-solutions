#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < std::min(k, (int)arr.size()); i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int k;
    
    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    
    arr.resize(k);
    
    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    int result = add_elements(arr, k);
    // Print the result
    std::cout << "Sum of elements: " << result << std::endl;
    return 0;
}