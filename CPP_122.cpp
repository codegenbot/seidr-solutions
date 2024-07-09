```cpp
#include <iostream>
#include <vector>
#include <string>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int num_elements, k;
    
    std::cout << "Enter number of elements: ";
    std::cin >> num_elements;
    
    for (int i = 0; i < num_elements; i++) {
        std::cout << "Enter element " << (i + 1) << ": ";
        int element;
        std::cin >> element;
        arr.push_back(element);
    }
    
    std::cout << "Enter k: ";
    std::cin >> k;
    
    int result = add_elements(arr, k);
    std::cout << "The sum of elements with length <= 2 is: " << result << std::endl;

    return 0;
}