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
    for (int i = 0; i < k; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }
    
    // Call the function
    int result = add_elements(arr, k);
    
    // Print the result
    std::cout << "The sum of elements with length <= 2 is: " << result << std::endl;
    
    return 0;
}