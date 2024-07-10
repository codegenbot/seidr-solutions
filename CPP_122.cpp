#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < std::min(k, arr.size()); i++) { 
        if (arr[i] < 10) { 
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int k;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    arr.resize(k);
    
    for (int i = 0; i < k; i++) { 
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int output = add_elements(arr, k);
    std::cout << "Sum of elements less than 10: " << output << std::endl;
    
    return 0;
}